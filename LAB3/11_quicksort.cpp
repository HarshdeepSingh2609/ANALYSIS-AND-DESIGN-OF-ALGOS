#include<iostream>
#include<fstream>
#include<cstdlib>
#include<time.h>
#include<math.h>
using namespace std;

void WriteDataToFile(int i, double avgTime, const string& filename) {
    ofstream fout(filename, ios::app);
    if(fout.is_open()) {
        fout << i << "," << avgTime << endl;
        fout.close();
    }
    else {
        cout << "Unable to open file for writing data. " << endl;
    }
}

int Partition(int *a, int low, int high) {
    int i = low;
    int j = high;
    int p = a[low];
    do {
        do {
            i = i + 1;
        } while(a[i] < p);
        do {
            j = j - 1;
        } while(a[j] > p);
        if(i < j) {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    } while(i <= j);
    a[low] = a[j];
    a[j] = p;
    return j;
}

void QS(int *a, int low, int high) {
    int j;
    if(low < high) {
        j = Partition(a, low, high);
        QS(a, low, j - 1);
        QS(a, j + 1, high);
    }
}

void GenerateGnuplotScript() {
    ofstream scriptFile("plot_script.gnu");
    if(scriptFile.is_open()) {
        scriptFile << "set terminal png\n";
        scriptFile << "set output 'plot.png'\n";
        scriptFile << "set title 'Average Time vs. Input Size for QuickSort'\n";
        scriptFile << "set xlabel 'Input Size'\n";
        scriptFile << "set ylabel 'Average Time (seconds)'\n";
        scriptFile << "plot 'data.txt' with lines title 'QuickSort'\n";
        scriptFile.close();
    }
    else {
        cout << "Unable to create Gnuplot script file." << endl;
    }
}

int main() {
    srand(time(0));
    
    for(int i = 1; i <= 10000; i += 1000) {
        int *a = new int[i];
        for(int j = 0; j < i; j++) {
            a[j] = rand();
        }
        clock_t time1 = clock();
        for(int k = 0; k < 10; k++) {
            QS(a, 0, i - 1);
        }
        clock_t time2 = clock();
        double avgtime = (double)(time2 - time1) / 10.0;
        WriteDataToFile(i, avgtime, "qs_rec.txt");
        delete[] a;
    }
    
    GenerateGnuplotScript();
    
    system("gnuplot plot_script.gnu");
    
    return 0;
}

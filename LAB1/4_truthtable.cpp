#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

void tt(int k, int n, char a[]) {
    if(k == n) {
    }
    else {
        a[k] = 'T';
        tt(k + 1, n, a);
        a[k] = 'F';
        tt(k + 1, n, a);
    }
}

int main() {
    ofstream dataFile("combination_times.txt");
    if (!dataFile) {
        cerr << "Failed to create the file for output";
        return 1;
    }

    srand(time(0));

    float y[100];
    int x[100];
    int z = 0;
    int n;
    int k = 0;

    for(int i = 2; i <= 100; i += 1) {
        char a[i];
        clock_t t1 = clock();
        n = i;
        for(int j = 0; j < 10; j++) {
            tt(k, n, a);
        }
        clock_t t2 = clock();
        float avg_time = static_cast<float>(t2 - t1) / CLOCKS_PER_SEC / 10;
        x[z] = i;
        y[z] = avg_time;
        dataFile << x[z] << " " << y[z] << endl;
        z++;
    }

    dataFile.close();
    cout << "Data written to combination_times.txt. Ready for plotting." << endl;

    return 0;
}

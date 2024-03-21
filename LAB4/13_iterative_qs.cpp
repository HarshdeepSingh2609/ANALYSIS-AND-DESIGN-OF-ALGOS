#include<iostream>
#include<ctime>
#include<stack>
#include<fstream>
using namespace std;

int partition(int *a, int low, int high) {
    int i = low;
    int j = high;
    int p = a[low];
    do {
        do {
            i = i + 1;
        } while (a[i] < p);
        do {
            j = j - 1;
        } while (a[j] > p);
        if (i < j) {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    } while (i <= j);
    a[low] = a[j];
    a[j] = p;
    return j;
}

void q_sort(int a[], int p, int q) {
    stack<int> s1; 
    q = q - 1;
    while (true) {
        while (p < q) {
            int j = partition(a, p, q);
            if ((j - p) < (q - j)) {
                s1.push(j + 1);
                s1.push(q);
                q = j - 1;
            }
            else {
                s1.push(p);
                s1.push(j - 1);
                p = j + 1;
            }
        }
        if (s1.empty()) { 
            return;
        }
        q = s1.top();
        s1.pop();
        p = s1.top();
        s1.pop();
    }
}

void WriteDataToFile(int n, double time) {
    ofstream myfile("qsrec.txt", ios::app);
    if (myfile.is_open()) {
        myfile << n << " " << time << endl;
        myfile.close();
    }
    else cout << "Unable to open file";
}

int main() {
    double time1, time2, avgtime;
    srand(time(0)); // Seed random number generator
    for (int i = 1; i < 10000; i += 1000) {
        int* a = new int[i];
        for (int j = 0; j < i; j++) {
            a[j] = rand();
        }
        time1 = (double)clock();
        for (int k = 1; k < 10; k++) {
            q_sort(a, 0, i - 1);
        }
        time2 = (double)clock();
        avgtime = (double)(time2 - time1) / 10;
        cout << avgtime * 10000 << " ";
        WriteDataToFile(i, (avgtime * 20000));
        delete[] a;
    }
    return 0;
}

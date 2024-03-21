#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

void WriteDataToFile(int i, double avgTime) {
    ofstream fout("merge_sort_data.txt", ios::app);
    if(fout.is_open()) {
        fout << i << "," << avgTime << endl;
        fout.close();
    } else {
        cerr << "Unable to open file for writing data." << endl;
    }
}

void merge(int *a, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = new int[n1];
    int *R = new int[n2];

    for(int i = 0; i < n1; i++) {
        L[i] = a[left + i];
    }
    for(int j = 0; j < n2; j++) {
        R[j] = a[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }
    while(j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
    delete[] L;
    delete[] R;
}

void MergeSort(int *a, int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main() {
    srand(time(0));

    float y[100];
    int x[100];
    int z = 0;

    for(int j = 1; j <= 10000; j += 1000) {
        int *a = new int[j];
        for(int k = 0; k < j; k++) {
            a[k] = rand();
        }
        clock_t t1 = clock();
        for(int i = 0; i < 10; i++) {
            MergeSort(a, 0, j - 1);
        }
        clock_t t2 = clock();
        float avg_time = static_cast<float>(t2 - t1) / 10;
        x[z] = j;
        y[z] = avg_time;
        WriteDataToFile(j, avg_time);
        z++;
    }

    cout << "Data written to merge_sort_data.txt. Ready for plotting." << endl;

    return 0;
}

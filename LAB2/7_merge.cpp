#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;

void merge(int arr1[], int arr2[], int s1, int s2, int arr3[]) {
    int a = 0;
    int b = 0;
    int i = 0;

    while (a < s1 && b < s2) {
        if (arr1[a] < arr2[b]) {
            arr3[i] = arr1[a];
            i++;a++;
        } else {
            arr3[i] = arr2[b];
            i++;b++;
        }
    }

    while (a < s1) {
        arr3[i] = arr1[a];
        i++;a++;
    }

    while (b < s2) {
        arr3[i] = arr2[b];
        i++;b++;
    }
}

int main() {
    ofstream dataFile("merge_times.txt");
    if (!dataFile) {
        cerr << "Failed to create the file for output";
        return 1;
    }

    srand(time(0));
    float avg_time;

    for (int i = 10000; i <= 100000; i += 10000) {
        int arr[i];
        int brr[i];

        for (int k = 0; k < i; k++) {
            arr[k] = rand() % i;
        }
        sort(arr, arr + i);

        for (int l = 0; l < i; l++) {
            brr[l] = rand() % i;
        }
        sort(brr, brr + i);

        int crr[i + i];
        clock_t t1 = clock();
        for (int j = 0; j < 10; j++) {
            merge(arr, brr, i, i, crr);
        }
        clock_t t2 = clock();

        avg_time = static_cast<float>(t2 - t1) / 10 / CLOCKS_PER_SEC;

        dataFile << i << " " << avg_time << endl;
    }

    dataFile.close();
    cout << "Data written to merge_times.txt. Ready for plotting." << endl;

    return 0;
}

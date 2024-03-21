#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int pivot(int arr[], int l, int h, int e) {
    int p = arr[l];
    int i = l;
    int j = h;

    do {
        while (arr[i] <= p && i < h)
            i++;
        while (arr[j] >= p && j > l)
            j--;
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    arr[l] = arr[j];
    arr[j] = p;
    return j;
}

int main() {
    ofstream dataFile("pivot_times.txt");
    if (!dataFile) {
        cerr << "Failed to create the file for output";
        return 1;
    }

    srand(time(0));
    float avg_time;

    for (int i = 10000; i <= 1000000; i += 10000) {
        int arr[i];
        int l = 0;
        int h = i;
        int e;

        for (int k = 0; k < i; k++) {
            arr[k] = rand() % i;
        }
        for (int k = 0; k < i; k++) {
            e = rand() % i;
        }

        clock_t t1 = clock();
        for (int j = 1; j <= 10; j++) {
            int p = pivot(arr, l, h, e);
        }
        clock_t t2 = clock();

        avg_time = static_cast<float>(t2 - t1) / 10 / CLOCKS_PER_SEC;

        dataFile << i << " " << avg_time << endl;
    }

    dataFile.close();
    cout << "Data written to pivot_times.txt. Ready for plotting." << endl;

    return 0;
}

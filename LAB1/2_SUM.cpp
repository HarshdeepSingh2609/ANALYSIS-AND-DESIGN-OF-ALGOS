#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int sum(int a[], int s, int l) {
    if (l == s) {
        return 0;
    } else {
        return a[l] + sum(a, s, l + 1);
    }
}

int main() {
    ofstream dataFile("sum_times.txt");
    if (!dataFile) {
        cerr << "Failed to create the file for output";
        return 1;
    }

    srand(time(0));

    for (int i = 1000; i <= 100000; i += 1000) {
        int* a = new int[i];

        for (int k = 0; k < i; k++) {
            a[k] = rand() % i;
        }

        clock_t t1 = clock();
        for (int j = 0; j < 10; j++) {
            sum(a, i, 0);
        }
        clock_t t2 = clock();

        float avg_time = static_cast<float>(t2 - t1) / CLOCKS_PER_SEC / 10;

        dataFile << i << " " << avg_time << endl;

        delete[] a;
    }

    dataFile.close();
    cout << "Data written to sum_times.txt. Ready for plotting." << endl;

    return 0;
}

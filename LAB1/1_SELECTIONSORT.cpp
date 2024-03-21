 #include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void sel_sort(int a[], int s) {
    for (int i = 0; i < s - 1; i++) {
        int min = i;
        for (int j = i + 1; j < s; j++) {
            if (a[min] > a[j]) {
                min = j;
            }
        }
        if (min != i) {
            swap(a[i], a[min]);
        }
    }
}

int main() {
    srand(time(0)); // Seed for random number generation
    
    ofstream fout("select.txt"); // Open a file to write data
    if (!fout.is_open()) {
        cout << "Error: Unable to open file for writing data." << endl;
        return 1;
    }

    // Loop for different array sizes
    for (int i = 1000; i <= 100000; i += 1000) {
        int a[i];

        // Generate random numbers from 1 to i
        for (int k = 0; k < i; k++) {
            a[k] = rand() % i + 1;
        }

        // Timing the sorting process
        clock_t t1 = clock();
        for (int j = 1; j <= 10; j++) {
            sel_sort(a, i);
        }
        clock_t t2 = clock();
        
        // Calculate average time
        float avg_time = static_cast<float>(t2 - t1) / CLOCKS_PER_SEC / 10;

        // Write data to file
        fout << i << " " << avg_time << endl;
    }

    fout.close(); // Close the file after writing data

    // Notify that data has been written to file
    cout << "Data has been written to file 'data.txt'." << endl;

    return 0;
}

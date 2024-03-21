#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void TOH(int n, char s, char sp, char d) {
    if (n == 0)
        return;
    else {
        TOH(n - 1, s, d, sp);
        TOH(n - 1, sp, s, d);
    }
}

int main() {
    ofstream dataFile("TOH_times.txt");
    if (!dataFile) {
        cerr << "Failed to create the file for output";
        return 1;
    }

    srand(time(0)); // Initialize random seed
    int n;
    char s = 'A', sp = 'B', d = 'C';

    for (int i = 2; i <= 50; i += 5) {
        clock_t t1 = clock();
        n = i;
        for (int j = 0; j < 10; j++) {
            TOH(n, s, sp, d);
        }
        clock_t t2 = clock();

        float avg_time = static_cast<float>(t2 - t1) / CLOCKS_PER_SEC / 10;

        dataFile << i << " " << avg_time << endl;
    }

    dataFile.close();
    cout << "Data written to TOH_times.txt. Ready for plotting." << endl;

    return 0;
}

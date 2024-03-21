#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;

int pow(int xx, int n) {
    int num = xx;
    int raisedto = n;
    int ans = 1;
    while (raisedto > 0) {
        while (raisedto % 2 == 0) {
            num = num * num;
            raisedto = raisedto / 2;
        }
        raisedto--;
        ans = ans * num;
    }
    return ans;
}

int main() {
    ofstream dataFile("power_times.txt");
    if (!dataFile) {
        cerr << "Failed to create the file for output";
        return 1;
    }

    float avg_time;
    int xx = 2;
    int n;
    int x[100], z = 0;
    float y[100];

    for (int i = 1; i <= 100; i += 1) {
        clock_t t1 = clock();
        n = i;
        for (int j = 1; j <= 10; j++) {
            int ans = pow(xx, n);
        }
        clock_t t2 = clock();
        avg_time = static_cast<float>(t2 - t1) / 10 / CLOCKS_PER_SEC;
        x[z] = i;
        y[z] = avg_time;
        dataFile << x[z] << " " << y[z] << endl;
        z++;
    }

    dataFile.close();
    cout << "Data written to power_times.txt. Ready for plotting." << endl;

    return 0;
}

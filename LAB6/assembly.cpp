#include <iostream>
using namespace std;

int assemblyTime(int a[2][4], int t[2][4], int e1, int e2, int x1, int x2, int n, int f1[], int f2[], int l1[], int l2[], int& fstar, int& lstar) {
    f1[0] = e1 + a[0][0];
    f2[0] = e2 + a[1][0];

    for (int j = 1; j < n; j++) {
        if (f1[j - 1] + a[0][j] < f2[j - 1] + t[1][j - 1] + a[0][j]) {
            f1[j] = f1[j - 1] + a[0][j];
            l1[j] = 1;
        } else {
            f1[j] = f2[j - 1] + t[1][j - 1] + a[0][j];
            l1[j] = 2;
        }
        if (f2[j - 1] + a[1][j] < f1[j - 1] + t[0][j] + a[1][j]) {
            f2[j] = f2[j - 1] + a[1][j];
            l2[j] = 2;
        } else {
            f2[j] = f1[j - 1] + t[0][j] + a[1][j];
            l2[j] = 1;
        }
    }

    if (f1[n - 1] + x1 < f2[n - 1] + x2) {
        fstar = f1[n - 1] + x1;
        lstar = 1;
    } else {
        fstar = f2[n - 1] + x2;
        lstar = 2;
    }

    return fstar;
}

int main() {
    int n = 4;
    int a[2][4] = {{4, 6, 8, 2}, {2, 15, 16, 4}};
    int t[2][4] = {{0, 9, 4, 5}, {0, 13, 4, 8}};
    int e1 = 10;
    int e2 = 12;
    int x1 = 18;
    int x2 = 7;
    int f1[4], f2[4], l1[4], l2[4], fstar, lstar;

    int result = assemblyTime(a, t, e1, e2, x1, x2, n, f1, f2, l1, l2, fstar, lstar);

    cout << "Minimum time: " << result << endl;

    cout << "Path: ";
    int line = lstar;
    for (int i = n - 1; i >= 0; i--) {
        cout << line << " ";
        if (line == 1)
            line = l1[i];
        else
            line = l2[i];
    }
    cout << endl;

    return 0;
}

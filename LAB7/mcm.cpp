#include <iostream>
#include <climits>
using namespace std;

void printOptimalParenthesization(int i, int j, int brac[][5], char& name) {
    if (i == j) {
        cout << name++;
        return;
    }
    cout << "(";
    printOptimalParenthesization(i, brac[i][j], brac, name);
    printOptimalParenthesization(brac[i][j] + 1, j, brac, name);
    cout << ")";
}

void calculateMatrixChainOrder(int dimensions[], int n) {
    int m[n][n];
    int brac[5][5];
    for (int i = 1; i < n; i++)
        m[i][i] = 0;
    for (int L = 2; L <= n; L++) {
        for (int i = 1; i <= n - L + 1; i++) {
            int j = i + L - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int q = m[i][k] + m[k + 1][j] + dimensions[i - 1] * dimensions[k] * dimensions[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    brac[i][j] = k;
                }
            }
        }
    }
    cout << "Minimum number of multiplications: " << m[1][n - 1] << endl;
    char name = 'D';
    cout << "Optimal Parenthesization: ";
    printOptimalParenthesization(1, n - 1, brac, name);
    cout << endl;
}

int main() {
    int dimensions[] = {1, 2, 3, 4, 3};
    int N = sizeof(dimensions) / sizeof(dimensions[0]);
    calculateMatrixChainOrder(dimensions, N);
    return 0;
}

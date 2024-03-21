#include<iostream>
#include<fstream>
#include<time.h>
#include<limits>
using namespace std;

void WriteDataToFile(int i, double avgTime) {
    ofstream fout("prims.txt", ios::app);
    if (fout.is_open()) {
        fout << i << "," << avgTime << endl;
        fout.close();
    }
    else {
        cout << "Unable to open file for writing data. " << endl;
    }
}

void prims(int **cost, int n, int **t) {
    int *near = new int[n];
    int mincost, k, l;

    mincost = cost[0][1];
    k = 0;
    l = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cost[i][j] < mincost) {
                mincost = cost[i][j];
                k = i;
                l = j;
            }
        }
    }

    t[0][0] = k;
    t[0][1] = l;

    for (int i = 0; i < n; i++) {
        if (cost[i][k] < cost[i][l]) {
            near[i] = k;
        }
        else {
            near[i] = l;
        }
    }
    near[k] = near[l] = 0;

    for (int j = 1; j < n - 1; j++) {
        int u;
        mincost = numeric_limits<int>::max();

        for (int i = 0; i < n; i++) {
            if (near[i] != 0 && cost[i][near[i]] < mincost) {
                u = i;
                mincost = cost[i][near[i]];
            }
        }
        t[j][0] = u;
        t[j][1] = near[u];
        near[u] = 0;

        for (int k = 0; k < n; k++) {
            if (near[k] != 0 && cost[k][near[k]] > cost[k][u]) {
                near[k] = u;
            }
        }
    }
    delete[] near;
}

int main() {
    srand(time(0));

    double time1, time2, avgtime;
    for (int k = 10; k < 1000; k += 100) {
        int **cost = new int*[k];
        int **t = new int*[k - 1];

        for (int i = 0; i < k; i++) {
            cost[i] = new int[k];
            if (i < k - 1) {
                t[i] = new int[2];
            }
        }

        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                cost[i][j] = cost[j][i] = (rand() % 10) + 1;
            }
        }

        time1 = clock();
        for (int j = 0; j < 10; j++) {
            prims(cost, k, t);
        }
        time2 = clock();

        for (int i = 0; i < k - 1; i++) {
            cout << t[i][0] << " - " << t[i][1] << " Cost" << "-" << cost[t[i][0]][t[i][1]] << endl;
        }

        avgtime = (double)(time2 - time1) / (CLOCKS_PER_SEC * 10);

        for (int i = 0; i < k; i++) {
            delete[] cost[i];
            if (i < k - 1) {
                delete[] t[i];
            }
        }

        delete[] cost;
        delete[] t;

        WriteDataToFile(k, avgtime);
    }
    return 0;
}

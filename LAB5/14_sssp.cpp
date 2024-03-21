#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits.h>
#include <fstream>
#include <vector>

using namespace std;

const int MAX = 100;

void shortestPaths(int u, vector<vector<int>>& cost, int dist[], int n) {
    bool S[MAX];
    for (int i = 0; i < n; i++) {
        dist[i] = cost[u][i];
        S[i] = false;
    }
    dist[u] = 0;
    S[u]=true;
    for (int count = 0; count < n - 1; count++) {
        int minDistVertex = -1;
        int minDist = INT_MAX;
        for (int v = 0; v < n; v++) {
            if (!S[v] && dist[v] < minDist) {
                minDist = dist[v];
                minDistVertex = v;
            }
        }
        if (minDistVertex == -1)
            break;
        S[minDistVertex] = true;
        for (int w = 0; w < n; w++) {
            if (!S[w] && cost[minDistVertex][w] && dist[minDistVertex] + cost[minDistVertex][w] < dist[w])
                dist[w] = dist[minDistVertex] + cost[minDistVertex][w];
        }
    }
}

void WriteDataToFile(int n, float avgTime) {
    ofstream fout("sssp.txt", ios::app);
    if (fout.is_open()) {
        fout << n << " " << avgTime << endl;
        fout.close();
    } else {
        cerr << "Unable to open file for writing data." << endl;
    }
}

int main() {
    srand(time(0));

    int n = 0;
    vector<vector<int>> cost(MAX, vector<int>(MAX, 0));
    int dist[MAX];
     for (int i = 10; i <= 100; i += 10) {

        n = i;

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (j == k) {
                    cost[j][k] = 0;
                } else {
                    cost[j][k] = rand() % 101;
                }
            }
        }

        clock_t t1 = clock();
        shortestPaths(0, cost, dist, n);
        clock_t t2 = clock();

        float avg_time = float(t2 - t1) / CLOCKS_PER_SEC;
        
        WriteDataToFile(n, avg_time);

        cout << "Number of vertices: " << n << ", Average time: " << avg_time << " seconds" << endl;
    }

    return 0;
}

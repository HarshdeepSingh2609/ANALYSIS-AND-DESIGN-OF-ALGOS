#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <limits.h>

using namespace std;

const int MAX = 100;

void primMST(vector<vector<int>>& cost, int n, vector<pair<int, int>>& t) {
    int near[MAX];
    int mincost = 0;

    // Find the initial edge of minimum cost
    int k, l;
    int minCostEdge = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cost[i][j] < minCostEdge) {
                minCostEdge = cost[i][j];
                k = i;
                l = j;
            }
        }
    }

    near[k] = near[l] = 0;
    t.push_back(make_pair(k, l));
    mincost += cost[k][l];

    // Update near[] array
    for (int i = 0; i < n; i++) {
        near[i] = (cost[i][k] < cost[i][l]) ? k : l;
    }

    // Add additional edges to the minimum spanning tree
    for (int i = 2; i < n; i++) {
        int j;
        int minCost = INT_MAX;
        for (int v = 0; v < n; v++) {
            if (near[v] != 0 && cost[v][near[v]] < minCost) {
                j = v;
                minCost = cost[v][near[v]];
            }
        }
        t.push_back(make_pair(j, near[j]));
        mincost += minCost;
        near[j] = 0;

        // Update near[] array
        for (int k = 0; k < n; k++) {
            if (near[k] != 0 && cost[k][near[k]] > cost[k][j]) {
                near[k] = j;
            }
        }
    }
}

int main() {
    srand(time(0));

    int n = 0;
    vector<pair<int, int>> t; // Minimum spanning tree edges

    for (int i = 10; i <= 100; i += 10) {
        n = i;

        // Populate cost matrix with random values
        vector<vector<int>> cost(n, vector<int>(n, 0));
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (j != k) {
                    cost[j][k] = rand() % 101; // Values range from 0 to 100
                }
            }
        }

        // Measure execution time
        clock_t t1 = clock();
        primMST(cost, n, t);
        clock_t t2 = clock();
        float avg_time = float(t2 - t1) / CLOCKS_PER_SEC;

        cout << "Number of vertices: " << n << ", Average time: " << avg_time << " seconds" << endl;
    }

    return 0;
}

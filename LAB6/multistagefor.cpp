#include <iostream>
#include <climits>
using namespace std;

const int VERTICES = 7;

int calculateStages(int graph[VERTICES][VERTICES], int n, int i, int count) {
    count++;
    if (i == n - 1) {
        return count;
    }
    for (int j = 0; j < n; j++) {
        if (graph[i][j] != 0) {
            return calculateStages(graph, n, j, count);
        }
    }
}

int findMinimumCostVertex(int j, int graph[VERTICES][VERTICES], int fCost[], int n) {
    int minVertex;
    int minCost = INT_MAX;
    for (int i = j + 1; i < n; i++) {
        if (graph[j][i] != 0) {
            if (graph[j][i] + fCost[i] < minCost) {
                minVertex = i;
                minCost = graph[j][i] + fCost[i];
            }
        }
    }
    return minVertex;
}

void calculateForwardCost(int graph[VERTICES][VERTICES], int n, int stages) {
    int d[100000];
    int fCost[1000000];
    fCost[n - 1] = 0;
    for (int j = n - 2; j >= 0; j--) {
        int r = findMinimumCostVertex(j, graph, fCost, n);
        fCost[j] = graph[j][r] + fCost[r];
        d[j] = r;
    }
    int p[100000];
    p[0] = 0;
    p[stages] = n;
    for (int j = 1; j < stages; j++) {
        p[j] = d[p[j - 1]];
    }

    cout << "Minimum Cost: " << fCost[0] << endl;
    cout << "Path: ";
    for (int j = 0; j < stages; j++) {
        cout << p[j] << " ";
    }
    cout << endl;
}

int main() {
    int graph[VERTICES][VERTICES] = {{0, 2, 3, 4, 0, 0},
                                      {0, 0, 0, 0, 8, 0},
                                      {0, 0, 0, 0, 5, 7},
                                      {0, 0, 0, 0, 0, 6},
                                      {0, 0, 0, 0, 0, 0},
                                      {0, 0, 0, 0, 0, 0},};

    int stagesCount = calculateStages(graph, VERTICES, 0, 0);
    cout << "Number of Stages: " << stagesCount << endl;

    int k = 4;
    calculateForwardCost(graph, VERTICES, k);

    return 0;
}

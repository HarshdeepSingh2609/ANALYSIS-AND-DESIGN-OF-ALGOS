#include <iostream>
using namespace std;

#define V 4
#define INF 99999

void printPath(int predecessor[][V], int start, int end) {
    if (start == end) {
        cout << start;
        return;
    }
    if (predecessor[start][end] == -1) {
        cout << "No path exists from " << start << " to " << end;
        return;
    }
    printPath(predecessor, start, predecessor[start][end]);
    cout << " -> " << end;
}

void allPairsShortestPath(int graph[V][V]) {
    int distance[V][V];
    int predecessor[V][V];

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            distance[i][j] = graph[i][j];
            if (graph[i][j] != INF && i != j)
                predecessor[i][j] = i;
            else
                predecessor[i][j] = -1;
        }
    }

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (distance[i][k] != INF && distance[k][j] != INF && distance[i][k] + distance[k][j] < distance[i][j]) {
                    distance[i][j] = distance[i][k] + distance[k][j];
                    predecessor[i][j] = predecessor[k][j];
                }
            }
        }
    }

    cout << "Shortest distances and paths between every pair of vertices:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (i != j) {
                cout << "Shortest distance from " << i << " to " << j << ": " << distance[i][j] << ", Path: ";
                printPath(predecessor, i, j);
                cout << endl;
            }
        }
    }
}

int main() {
    int graph[V][V] = { {0, 3, INF, 7},
                        {8, 0, 2, INF},
                        {5, INF, 0, 1},
                        {2, INF, INF, 0} };

    allPairsShortestPath(graph);
    return 0;
}

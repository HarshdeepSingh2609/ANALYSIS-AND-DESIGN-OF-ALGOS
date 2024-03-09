#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cstdlib>

using namespace std;

int find(int i, vector<int>& p) {
    while (p[i] > 0) {
        i = p[i];
    }
    return i;
}

void UnionSets(int i, int j, vector<int>& p) {
    p[i] = j;
}

void heapify(vector<pair<int, int>>& edges, int N, int i) {
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < N && edges[l] < edges[smallest])
        smallest = l;
 
    if (r < N && edges[r] < edges[smallest])
        smallest = r;
 
    if (smallest != i) {
        swap(edges[i], edges[smallest]);
        heapify(edges, N, smallest);
    }
}

void buildHeap(vector<pair<int, int>>& edges) {
    int N = edges.size();
    int startIdx = (N / 2) - 1;
    for (int i = startIdx; i >= 0; i--) {
        heapify(edges, N, i);
    }
}

void kruskal(vector<pair<int, int>>& edges, vector<vector<int>>& cost, int n, vector<pair<int, int>>& t) {
    buildHeap(edges);
    vector<int> parent(n, -1);
    int mincost = 0;
    int i = 0;
    
    while (i < n && !edges.empty()) {
        pair<int, int> minEdge = edges.front();
        swap(edges[0], edges[edges.size() - 1]);
        edges.pop_back();
        heapify(edges, edges.size(), 0);

        int u = minEdge.first;
        int v = minEdge.second;

        int j = find(u, parent);
        int k = find(v, parent);

        if (j != k) {
            t.push_back(minEdge);
            mincost += cost[u][v];
            i++;
            UnionSets(j, k, parent);
        }
    }

    cout << "Minimum Cost of Spanning Tree: " << mincost << endl;
}

int main() {
    srand(time(0));

    int n = 0;
    vector<pair<int, int>> t; // Minimum spanning tree edges

    for (int i = 10; i <= 100; i += 10) {
        n = i;

        // Populate cost matrix with random values
        vector<vector<int>> cost(n, vector<int>(n, 0));
        vector<pair<int, int>> edges;
        for (int j = 0; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                cost[j][k] = rand() % 101; // Values range from 0 to 100
                cost[k][j] = cost[j][k]; // Undirected graph
                edges.push_back(make_pair(j, k));
            }
        }

        // Measure execution time
        clock_t t1 = clock();
        kruskal(edges, cost, n, t);
        clock_t t2 = clock();
        float avg_time = float(t2 - t1) / CLOCKS_PER_SEC;

        cout << "Number of vertices: " << n << ", Average time: " << avg_time << " seconds" << endl;
    }

    return 0;
}


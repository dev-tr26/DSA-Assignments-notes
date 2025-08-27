// (.) sort all edges acc to wt 



#include <bits/stdc++.h>
using namespace std;

// DSU: Disjoint Set Union (with path compression + union by rank)
class DSU {
    vector<int> parent, rank;
 
public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int x) {
        if (x == parent[x])
            return x;
        return parent[x] = find(parent[x]); // path compression
    }
 
    void unionByRank(int x, int y) {
        int px = find(x);
        int py = find(y);
        if (px == py) return;

        if (rank[px] < rank[py]) {
            parent[px] = py;
        } else if (rank[px] > rank[py]) {
            parent[py] = px;
        } else {
            parent[py] = px;
            rank[px]++;
        }
    }
};

// Kruskal's MST Function
int kruskalMST(int V, vector<vector<int>>& edges) {
    // edges format: {u, v, wt}
    // Step 1: Sort edges by weight
    sort(edges.begin(), edges.end(), [](vector<int>& a, vector<int>& b) {
        return a[2] < b[2];
    });

    DSU dsu(V);
    int mstWeight = 0;

    for (auto& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];

        if (dsu.find(u) != dsu.find(v)) {
            mstWeight += wt;
            dsu.unionByRank(u, v);
            // Optionally store the MST edges
            // cout << u << " - " << v << " = " << wt << endl;
        }
    }

    return mstWeight;
}

int main() {
    int V = 5;
    vector<vector<int>> edges = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    int mstCost = kruskalMST(V, edges);
    cout << "Minimum Cost of Spanning Tree: " << mstCost << endl;

    return 0;
}

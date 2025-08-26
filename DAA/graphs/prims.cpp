#include <bits/stdc++.h>
using namespace std; 


// a tree with n nodes and n-1 edges and all nodes are reachable from each other
// min spanning tree 

// there can be more than one spanning trees 
// any tree with min sum is MST 
// 2 ways prim's and kruskal's


// prim 's algo 

// Connect all nodes with the minimum total edge cost, without forming cycles.

// using arrays 
// O(V²) = time complexity

int prims(int V, vector<vector<int>>&graph){
    vector<int>min_edge_wt(V,INT_MAX);     // Cost to reach each node
    vector<int>vis(V,0);                   // visited arr

    min_edge_wt[0] = 0;          // starting node 0
    int total_wt =0;

    for(int i =0; i<V;i++){
        int u =-1;              // initialize a dummy value before comparison
        for(int j=0; j<V ; j++){                           //  Find the unvisited node with minimum edge weight
            if(!vis[j] && (u== -1 || min_edge_wt[j] < min_edge_wt[u])){
                u = j;
            }
        }
        vis[u]= 1;                     // Mark as included in MST
        total_wt += min_edge_wt[u];    // Add its weight to the total
    }
    // Update neighbors of u
    for(int v = 0; v <V;V++){
        if(graph[u][v] && !vis[v] && graph[u][v] < min_edge_wt[v]){
            min_edge_wt[v] = graph[u][v];
        }
    }
    return total_wt;
}

int main(){
    int V =5;
    vector<vector<int>>graph= {
        {0,2,0,6,0},
        {2,0,3,8,5},
        {0,3,0,0,7},
        {6,8,0,0,9},
        {0,5,7,9,0}
    };
    int minCostSpa_tree = prims(V,graph);
    cout<<"total cost :"<< minCostSpa_tree;
    return 0;
}



// min heap / pq helps us to pick min wt edge
// Time Complexity = O(E log V) using Min Heap.
// e log e for iteration + e log e for traversal 

int min_sp_tree(int V, vector<pair<int,int>>adj[]){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
    vector<int>vis(V,0);

    vector<pair<int,int>>MST; // {node,parent}
    pq.push({0,0});  // {wt, node, parent} 
    int sum =0;

    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();
        int node = it.second;
        int wt = it.first;

        if(vis[node]==1)continue;
        vis[node] = 1;             // add to mst
        sum +=wt;
        //parent in list posn

        for(auto it : adj[node]){
            int adjNode = it.first;
            int edge_wt = it.second;
            if(!vis[adjNode]){
                pq.push({edge_wt,node});
            }
        }
    }
    return sum;
}


int main() {
    int V = 5;
    vector<pair<int,int>> adj[V];

    // Edges for undirected graph: u - v (weight)
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});
    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});
    adj[0].push_back({3, 6});
    adj[3].push_back({0, 6});
    adj[1].push_back({4, 5});
    adj[4].push_back({1, 5});
    adj[2].push_back({4, 7});
    adj[4].push_back({2, 7});

    cout << "Minimum Spanning Tree Weight: " << min_sp_tree(V, adj) << endl;

    return 0;
}









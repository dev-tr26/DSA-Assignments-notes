#include<bits/stdc++.h>
using namespace std;

// need to find shortest path to all nodes 
// using pq 
// min heap {dist,node} 
// dist arr for tracking how much dist
// prevously marking all dist infinite  
// goto adj neighbours dist update when we get better path put in pq


vector<int>dijkstas(int V, vector<vector<int>>adj[], int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
    vector<int>dist(V);
    for(int i=0; i<V; i++)dist[i] = INT_MAX;

    dist[src] = 0;
    pq.push({0,src});

    while(!pq.empty()){
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for(auto neighbour: adj[node]){
            int edge_wt = neighbour[1];
            int adjNode = neighbour[0];

            if(dis + edge_wt < dist[adjNode]){
                dist[adjNode] = dis + edge_wt;
                pq.push({dist[adjNode],adjNode});
            }
        }
    }
    return dist;
}


int main()
{
    int V,E;
    cout<< "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>>adj[V];
    cout << "Enter edges in format: u v wt" << endl;
    for (int i = 0; i < E; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;

        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt}); // for undirected graph; remove if directed
    }

    int src;
    cout << "Enter start node: ";
    cin >> src;

    vector<int> shortestDistances = dijkstas(V, adj, src);

    cout << "Shortest distances from source is "<<endl;
    for (int i = 0; i < V; i++) {
        cout<< shortestDistances[i] << endl;
    }
    return 0;
}
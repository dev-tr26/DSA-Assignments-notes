// VIS[SRC]=1;
// q.push (src,-1) {node,parent} in queue 
// while q is not empty node = q.front.1st and parent = q.front.second 
// pop
// see adj_list neighbours , if adjacent node not visited mark as vis, push them in queue along with parent 
// for each unvis node do bfs 
// If a neighbor is already visited and its parent != adjacentnode i.e if its not the parent , then a cycle exists
//

#include<bits/stdc++.h>
using namespace std;

bool detect(int src, vector<int>adj[], vector<int> &vis){
    queue<pair<int,int>>q;
    q.push({src,-1});
    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for(int neighbour : adj[node]){
            if(!vis[neighbour]){
                vis[neighbour]=1;
                q.push({neighbour,node});
            }
            else if(parent != neighbour){
                return true;
            }
        }
    }
    return false;
}
 
// we need to do it for muiltiple components 
// for(i=0 or 1 to n )  based on indexining
// {
//     if not vis[i] {
//         if(detect[i] == true )RETURN TRUE ;
//     }
// }
// RETURN FALSE 

//tc = o(n+2e)

bool isCycle(int V, vector<int>adj[]){
    vector<int>vis(V,0);
    
    for(int i=0; i<V; i++){
        if(!vis[i]){
            if(detect(i,adj,vis)){
                return true;
            }
        }
        return false;
    }
}

int main()
{   int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<int> adj[V];

    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u); // undirected graph
    }

    if (isCycle(V, adj)) {
        cout << "Cycle detected in the graph." << endl;
    } else {
        cout << "No cycle in the graph." << endl;
    }
    
    return 0;
}
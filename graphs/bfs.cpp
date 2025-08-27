#include<bits/stdc++.h>
using namespace std;

queue<int>BFS( vector<vector<int>>&adj, int v){
    int nodes = adj.size();
    queue<int>out;
    vector<int>vis(nodes,0);
    vis[v] = 1;

    queue<int>q; 
    out.push(v);
    q.push(v);

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int neighbour : adj[curr]){
            if(!vis[neighbour]){
                vis[neighbour]=1;
                q.push(neighbour);
                out.push(neighbour);
            }
        }
    }
    return out;
}


vector<vector<int>>create_graph(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);

    for(int i= 0; i < m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return adj;
}


int main(){
    int starting_vertex;
    cin>>starting_vertex;
    vector<vector<int>>adjacency_list = create_graph();
    queue<int>output = BFS(adjacency_list, starting_vertex);
    while(!output.empty()){
        int num = output.front();
        output.pop();
        cout<<num<<" ";
    }
    return 0;
}


// tc = o(nodes)
// sc = o(vertex + total degrees)
// for loop runs for 2e times
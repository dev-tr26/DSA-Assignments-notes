#include<bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>>&adj, int v , vector<int>&vis, vector<int>&ls){
    vis[v] =1;
    ls.push_back(v);

    for(auto it : adj[v]){
        if(!vis[it]){
            DFS(adj, it, vis,ls);
        }
    }
}

   
vector<vector<int>>createGraph(){
    int n,m;
    cout<<"enter no of nodes";
    cin>>n;
    cout<<"enter no of edges:";
    cin>>m;
        vector<vector<int>>adj(n+1);
        for(int i=0; i<m; i++){
            int u,v;
            cout<<"enter edges "; 
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    return adj;
}


int main()
{
    int starting_vertex;
    cout << "Enter starting vertex for DFS: ";

    cin>>starting_vertex;
    vector<vector<int>>adjacency_list = createGraph();

    int nodes = adjacency_list.size();
    vector<int>visited(nodes,0);
    vector<int>output_list;
    DFS(adjacency_list, starting_vertex, visited, output_list);

    // Print DFS traversal
    cout << "DFS Traversal: ";

    for (int node : output_list) {
        cout << node << " ";
    }
    
    cout << endl;
    return 0;
}


// sc = o(n) vis + o(n) recur st space + o(n) for n nodes travel 
// tc = each node travelled once and for each node we call dfs calls for its neighbours = no of degrees
// tc = o(v + 2e) for directed graph 2e will be replaced by no of edges
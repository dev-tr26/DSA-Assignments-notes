// topo sort works for dag only 

// for(int i=0 to 5){
//     if not visited {dfs(i)}
// }


// maintain a vis list  
// in adj list check if vis 
// start dfs call from 0 declare stack 
// if no adjacent nodes-> put in st ->  go back  
// if adjacent nodes -> mark as visited -> make dfs call for it

#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<int>& visited, stack<int>& st ){
    visited[node] =1;
    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour,adj,visited,st);
        }
    }
    st.push(node);
}

vector<int>toposort(int V, vector<int>adj[]){
    vector<int>visited(V,0);
    stack<int>st;

    for(int i=0; i<V;i++){
        if(!visited[i]){
            dfs(i,adj,visited,st);
        }
    }

    vector<int>topo;
    while(!st.empty()){
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
}

int main() {
    int V = 6;
    vector<int> adj[V];

    // Directed edges (u -> v)
    adj[5].push_back(0);
    adj[5].push_back(2);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    vector<int> result = toposort(V, adj);

    cout << "Topological Sort: ";
    for (int node : result) {
        cout << node << " ";
    }

    return 0;
}










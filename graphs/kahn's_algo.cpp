// topological sorting only valid on dag 
// no cycle , directed edge
// if edge b/w u - v u appears before v

  
// ( .) insert all nodes with indegree 0  there will always be 1 min in queue
// (. ) take them out of queue 
// (. ) rreduce indegree of adj nodes if indegree becomes 0 send them to queue 


// Compute in-degree of each node: O(E)
// Push all nodes with in-degree 0 into a queue: O(V)
// While the queue is not empty:
// Pop a node
// Decrease in-degree of its neighbors
// If in-degree becomes 0, push into queue

// (. ) for indegree[adjacency_list_node]++ 


// (.) sc =o(n)
// (.) tc = (v+e)

#include <bits/stdc++.h>
using namespace std;

vector<int>toposort(int V, vector<int>adj[]){
    int indegree[V]={0};
    for(int i=0; i<V; i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }

    queue<int>q;
    for(int i=0; i< V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    vector<int>result;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        result.push_back(node);

        //node is in toposort so remove it from indegree
        for(auto it :adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    return result;
}


int main(){
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<int> adj[V];
    cout << "Enter directed edges (u -> v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // directed edge
    }

    vector<int> topo = toposort(V, adj);

    cout << "Topological Sort:\n";
    for (int node : topo) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}




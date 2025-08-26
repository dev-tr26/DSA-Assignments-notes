#include <bits/stdc++.h>
using namespace std;

        // MATRIX BASED REPRESENTATION 


// int main(){
//     int n,m;    // n = nodes , m = edges
//     cin>>n>>m;

//     // graph   SPACE CMPLEXITY = o ( n x n)
//     //    SEARCHING  = N x N 

//     int adj[n+1][m+1];  // 1 based indexing if 0 based take m,n
//     for(int i=0; i<m; i++){
//         int u,v;    
//         cin>>u>>v;
//         adj[u][v] = 1;   // adj[u][v] = weight if weighted graph
//         adj[v][u] = 1;
//     }
//     int x;
//     cin >>x;
//     return 0;

// }




//   adjacency list 
//   space com = o(e)
//   time com = o(v + e)

int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>>adj(v + 1);    // Works inside main, totally valid!

    for(int i=0; i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);   // for weighted graph adj[u].push_back({v,w})
        adj[v].push_back(u);   // for undirected graph 
    }
    
    for (int i = 0; i < v; i++)
    {
        cout<< i <<" :";
        for(int neighbour : adj[i]){
            cout<< neighbour <<" ";
            cout<<endl;
        }
    }
    
    return 0;
}

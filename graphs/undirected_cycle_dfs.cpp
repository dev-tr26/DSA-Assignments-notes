#include<bits/stdc++.h>
using namespace std;

// 



//catch cycle when if node is prevously vis also its not a parent 

bool dfs(int node, int parent, vector<int>&vis ,vector<int>adj[]){
    vis[node] = 1;
    for(auto neighbour : adj[node]){
        if(!vis[neighbour]){
            if(dfs(neighbour,node,vis,adj)==true){
                return true;
            }
        }
        else{
            if(neighbour !=parent)return true;
        }
    }
    return false;
}

//there can be muiltiple components 
bool Iscycle(int V, vector<int>adj[]){
    vector<int>vis(V,0);
    for(int i=0; i<V; i++){
        if(!vis[i]){
            if(dfs(i,-1,vis,adj)==true)return true;
        }
    }
    return false;
}

//sc = o(n) + o(n)
// tc = o(n +2e) + o(n)

int main()
{
    
    return 0;
}
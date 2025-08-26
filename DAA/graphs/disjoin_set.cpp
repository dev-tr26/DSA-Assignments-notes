#include<bits/stdc++.h>
using namespace std;


// used to tell if two nodes belong to same component or not
// find parent tells ultimate parent using path compression  log(N)
// if ultimate parent of both are same they belong to same component 
// union by rank attaches nodes dynamically 

// union(u,v){
// find ultimate par of u &v pu,pv
// find rank of pu,pv
// connect smaller to larger rank always 

class DisjoinSet{
    vector<int>rank,parent;
public:
    DisjoinSet(int n){
        rank.resize(n+1,0);       //works for both 0 and 1 based indexing
        parent.resize(n+1);
        for(int i=0; i<n;i++)parent[i]=i;
    }


    int findParent(int node){
        if(node== parent[node])return node;
                return parent[node] = findParent[parent[node]];
    }

    void UnionByRank(int u, int v){
        int ultimate_par_u = findParent(u);
        int ulp_v = findParent(v);
        if(ultimate_par_u == ulp_v)return;
        if(ultimate_par_u < ulp_v){
            parent[ultimate_par_u] = ulp_v; 
        }
        else{
            parent[ulp_v] = ultimate_par_u;
            rank[ultimate_par_u]++;
        }
    }
};


int main()
{
    DisjoinSet ds(7);
    ds.UnionByRank(1,2);
    ds.UnionByRank(2,3);
    ds.UnionByRank(4,5);
    ds.UnionByRank(6,7);
    ds.UnionByRank(5,6);

    // if(ds.findParent(3) == ds.

    return 0;
}
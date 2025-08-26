#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>zigzaglevelorder(node*root){
    vector<int>result;
    if(root==NULL){
        return result;
    }

    queue<node*>q;
    q.push(root);
    bool flag = 0;

    while(!q.empty()){
        int size = q.size();
        vector<int>row(size);
        for(int i =0 ; i<size;i++){
            node*temp = q.front();
            q.pop();
        
         
        row[index]=node->value;
        if(node->left){
            q.push(node->left);
        }
        
        if(node->right){
            q.push(node->right);
        }
    }

    }
}

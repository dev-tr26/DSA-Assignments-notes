#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int value){
        left=right =NULL;
        data= value;
    }
};

Node*BinaryTree(){

    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }

    Node*temp =new Node(x);
    cout<<"enter left child of "<< x <<" ";
    temp->left=BinaryTree();
    cout<<"enter right child of "<< x <<" ";
    temp->right=BinaryTree();
    return temp;
}

int main()
{
    cout<<"enter root node"<<endl;
    Node*root ;
    root= BinaryTree();
    return 0;
}


//LEVEL ORDER TRAVERSAL

vector<int>levelOrder(Node*root){
    if(root==NULL)
        return;
    queue<Node*>q;
    q.push(root);
    vector<int>ans;
    Node*temp;
    while(!q.empty()){
        temp=q.top();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left)
            q.push(temp->left)
        if(temp->right)
            q.push(temp->right)
    }
    return ans;
}

// size of BT

void size_BT(Node*root ,int &cnt){
    if(root==NULL){
        return;
    }
    cnt++;
    size_BT(root->left,cnt);
    size_BT(root->right,cnt);
}

// count leaf nodes in BT

void leaf_node(Node*root ,int &cnt){
    if(root==NULL){
        return;
    }   
    if(!root->left && !root->right){
        cnt++;
        return;
    }
    leaf_node(root->left,cnt);
    leaf_node(root->right,cnt);
}

void non_leaf_Node(Node*root,int &cnt){
    if(root!=NULL){
        return;
    }
    if(root->left && root->right){
        cnt++;
        return;
    }
    non_leaf_Node(root->left,cnt);
    non_leaf_Node(root->right,cnt);
}
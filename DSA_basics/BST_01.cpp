#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node*left;
    Node*right;

    Node(int value){
        data=value;
        left=right=NULL;
    }
};



Node*insert(Node*root,int target){
    if(root==NULL){
        Node*temp =new Node(target);
        return temp;
    }
    if(target< root->data){
        root->left = insert(root->left,target);
    }
    else{
        root-> right =insert(root->right,target);
    }
    return root;
}

void inorder(Node*root){
    if(root==NULL){return;}

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool search(Node*root,int target){
    if(root==NULL){return 0;}

    if(root->data == target){return 1;}

    if(root->data <target){
         return search(root->right,target);
    }
    else{
        return search(root->left,target);
    }
}

//delete node 

Node*deleteNode(Node*root,int target){
    if(root==NULL){return NULL;}

    if(root->data < target){
        root->right = deleteNode(root->right,target);
        return root;
    }
    else if(root->data >target){
        root->left = deleteNode(root->left,target);
        return root;
    }
    else{
        //leaf node
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }
        // 1 node 
        else if(!root->right){
            Node*temp = root->left;
            delete root;
            return temp;
        }
        else if(!root->left){
            Node*temp = root->right;
            delete root;
            return temp;
        }
        // 2 child exist
        else{
            //find greatest ele in left
            Node*child = root->left;
            Node*parent = root;

            //right most node tak pahunchana hai 
            while(child->right){
                 parent = child;
                 child = child->right;
            }

            if(root!=parent){
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
                delete root;
                return child;
            }
            else{
                child->right =root->right;
                delete root;
                return child;
            }
        }
    }
    return root;
}

void inorder(Node*root , vector<int>ans){
        if(!root)
            return;
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }

bool isBST(Node*root){
    vector<int>v;
    inorder(root,v);
    for(int i = 0; i< v.size(); i++){
        if(v[i]<=v[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[]={3,7,4,1,6,8};
    Node*root=NULL;
    for(int i=0; i<6;i++){
        root=insert(root,arr[i]);
    }

    //traversal inorder gives bst in sorted order
    inorder(root);

    cout<<endl;
    cout<<search(root,99);
    cout<<endl;
    root=deleteNode(root,4);
    inorder(root); 

    cout<<endl;
    bool a = isBST(root);
    cout<<a;
    return 0;
}
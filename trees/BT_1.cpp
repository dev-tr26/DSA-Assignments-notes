#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node*left;
    Node*right;
        Node(int value){
            data = value;
            left=right =NULL;
        }

        void pre_order(Node*root){
            if(root==NULL)
                return;
            cout<<root->data<<" ";
            pre_order(root->left);
            pre_order(root->right);
        }

        void post_order(Node*root){
            if(root==NULL)
                return;
            post_order(root->left);
            post_order(root->right);
            cout<<root->data<<" ";
        }

        void in_order(Node*root){
            if(root==NULL)
                return;
            in_order(root->left);
            cout<<root->data<<" ";
            in_order(root->right);
        }

        void level_order(Node*root){
            if(root==NULL)
                return;
            queue<Node*>q;
            q.push(root);

            while(!q.empty()){
                Node*curr =q.front();
                q.pop();
                cout<<curr->data<<" ";

                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
        }

        //no of non leaf nodes

        void non_leaf_Node(Node*root,int &cnt){
            if(root==NULL){
                return;
            }
            if(root->left || root->right){
                cnt++;
            }
            non_leaf_Node(root->left,cnt);
            non_leaf_Node(root->right,cnt);
        }

        //size of bt (no of total nodes)

        void size_BT(Node*root ,int &cnt){
            if(root==NULL){
                return;
            }
            cnt++;
            size_BT(root->left,cnt);
            size_BT(root->right,cnt);
        }

        //height of bt
        int maxi=0;

        int height(Node*root){
            if(root==NULL){
                return 0;
            }
            int lh = height(root->left);
            int rh = height(root->right);

            return 1 + max(lh,rh); 
        }

        void print_preorder(){
            pre_order(this);
        }

        void print_postorder(){
            post_order(this);
        }

        void print_inorder(){
            in_order(this);
        }

        void print_levelorder(){
            level_order(this);
        }

        void print_non_leaf_nodes(){
            int count=0;
            non_leaf_Node(this,count);
            cout<<count<<endl;
        }

        void print_sizeBT(){
            int count=0;
            size_BT(this,count);
            cout<<count<<endl;
        }

        void print_height(){
            cout << height(this) <<endl;
        }

        ~Node(){
            delete left;
            delete right;
        }
};
int main()
{   Node*root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    cout<<"preorder : ";
    root->print_preorder();

    cout<<endl;
    cout<<"postorder : ";
    root->print_postorder();

    cout<<endl;
    cout<<"inorder : ";
    root->print_inorder();

    cout<<endl;
    cout<<"levelorder : ";
    root->print_levelorder();
    
    cout<<endl;
    cout<<"non leaf nodes : ";
    root->print_non_leaf_nodes();

    cout<<"size of binary tree : ";
    root->print_sizeBT();

    cout<<"height of BT: ";
    root->print_height();

    delete root;
    return 0;
}

//check balanced bt without early termination

// bool is_balance(Node*root){
//     bool valid = 1;
//     height(root,valid);
//     return valid;
// }

// int height(Node*root,int &valid){
//     if(root==NULL){
//         return; 
//     }

//     lh = height(root->left,valid);
//     if(lh ==-1){valid=0;}
//     rh = height(root->right,valid);
//     if(rh==-1){valid =0;}

//     if( abs(lh-rh)>1){v;}
//     return 1 + max(lh,rh);
// }

// //check for balanced bt for early termination 

// bool is_balance(Node*root){
//     return height(root)!= -1;
// }


// int height(Node*root){

//     if(root==NULL){return 0;}

//     lh = height(root->left);
//     if(lh==-1){return -1;}
//     rh = height(root->right);
//     if(rh==-1){return -1;}

//     if(abs(lh-rh)>1){return -1;}
//     return 1+max(lh,rh);
// }
#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node *left,*right;

};

node* newNode(int x)
{
    node* n=new node;
    n->data=x;
    n->left=n->right=NULL;

    return n;
}

node* insert(node* root,int x){

    if(root==NULL) return newNode(x);

    if(x<root->data) root->left=insert(root->left,x);
    else if(x>root->data) root->right=insert(root->right,x);
    return root;

}

node* findMin(node* root)
{
    while(root->left) {
        root=root->left;}

    return root;
}

node* deleteNode(node* root,int x)
{
    if(root==NULL) return root;
    if(x<root->data) root->left=deleteNode(root->left,x);
    else if(x>root->data) root->right=deleteNode(root->right,x);
    else{

        if(root->left==NULL){
            node* t=root->right;
            delete root; return t;
        }

        if(root->right==NULL){
            node* t=root->left;
            delete root; return t;
        }

        node* t=findMin(root->right);
        root->data=t->data;
        root->right=deleteNode(root->right,t->data);
    }

    return root;
}

int maxDepth(node* root){


    if(root==NULL) return 0;
    return max(maxDepth(root->left),maxDepth(root->right))+1;
}

int minDepth(node* root){
    if(root==NULL) return 0;

    return min(minDepth(root->left),minDepth(root->right))+1;
}

int main(){
    node* root=NULL;

    root=insert(root,50);

    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);
    root=deleteNode(root,20);

    cout<<"Max depth="<<maxDepth(root)<<endl;
    cout<<"Min depth="<<minDepth(root)<<endl;
}

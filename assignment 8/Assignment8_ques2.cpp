#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
};
node* newNode(int x) 
{
    node* t=new node;
    t->data=x;
    t->left=t->right=NULL;

    return t;
}

node* insert(node* root,int x){

    if(root==NULL) return newNode(x);

    if(x<root->data) root->left=insert(root->left,x);
    
    else if(x>root->data) root->right=insert(root->right,x);
    return root;

}

node* searchRec(node* root,int x) {
    if(root==NULL||root->data==x) return root;
    if(x<root->data) return searchRec(root->left,x);
    else return searchRec(root->right,x);

}

node* searchNonRec (node* root,int x){
    while(root!=NULL){

        if(root->data==x) return root;
        else if(x<root->data) root=root->left;
        else root=root->right;

    }

    return NULL;
}

int minElement(node* root)
{
    while(root->left) root=root->left;

    return root->data;
}

int maxElement(node* root) {

    while(root->right) root=root->right;
    return root->data;
}

node* successor(node* root,int x) {
    node *s=NULL;

    while(root){
        if(x<root->data){
            s=root;
            root=root->left;
        }else root=root->right;
    }
    return s;

}

node* predecessor(node* root,int x){
    node *p=NULL;

    while(root) {
        if(x>root->data){
            p=root;
            root=root->right;
        }else root=root->left;
    }

    return p;
}

int main(){
    node* root=NULL;

    int a[]= {50,30,20,40,70,60,80};
    for(int i=0;i<7;i++) {
        root=insert(root,a[i]);
    }

    if(searchRec(root,40)) cout<<"Found Rec\n";
    if(searchNonRec(root,40)) cout<<"Found Non Rec\n";

    cout<<"Min="<<minElement(root)<<endl;
    cout<<"Max="<<maxElement(root)<<endl;

    node* s=successor(root,40);
    if(s) cout<<"Successor="<<s->data<<endl;
    node* p=predecessor(root,40);
    if(p) cout<<"Predecessor="<<p->data<<endl;
}

#include <iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node* newNode(int x){
    node *temp = new node;
    temp -> data = x;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
}

int checkBST(node *root, int min, int max){
    if(root == NULL)
        return 1;

    if(root -> data < min || root -> data > max)
        return 0;

    return checkBST(root -> left, min, root -> data - 1) &&
           checkBST(root -> right, root -> data + 1, max);
}

int isBST(node *root){
    return checkBST(root, -99999, 99999);
}

int main(){
    node *root = newNode(10);
    root -> left = newNode(5);
    root -> right = newNode(20);
    root -> left -> right = newNode(9);

    if(isBST(root))
        cout<<"It is a BST\n";
    else
        cout <<"Not a BST\n";

    return 0;
}

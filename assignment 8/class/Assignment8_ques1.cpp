#include <iostream>
using namespace std;

int tree[100];
int n;

void preorder(int i){
    if(i>n || tree[i]==-1) return;
    cout<<tree[i]<<" ";

    preorder(2*i) ;
    preorder(2*i+1) ;

}
void inorder(int i){
    if(i>n || tree[i]==-1) return;
    inorder(2*i);
    cout<<tree[i]<<" ";
    inorder(2*i+1);
}
void postorder ( int i){
    if(i>n ||tree[i]==-1) return;
    postorder(2*i);
    postorder(2*i+1) ;
    cout<<tree[i]<< " ";
}

int main() {

    cout<<"Enter nodes: ";
    cin>>n;

    for(int i=1; i<=n ; i++){
        cout<<"Value at "<<i;
        cin>>tree[i];
    }
    cout<<"Preorder: ";
    preorder(1);
    cout<<"\nInorder: ";

    inorder(1);
    cout<<"\nPostorder: ";
    postorder(1);

    return 0;
}

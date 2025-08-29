#include <bits/stdc++.h>

using namespace std;

void setVal(int a[], int n, int i, int j, int v){
    if(abs(i-j)<=1) a[i*3+j-i]=v;
}

int getVal(int a[], int n, int i, int j){
    if(abs(i-j)<=1) return a[i*3+j-i];
    else return 0;
}

void disp(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<getVal(a,n,i,j)<<" ";
        cout<<endl;
    }
}

int main(){
    int n=3;
    int a[3*n-2]={0};
    setVal(a,n,0,0,1);
    setVal(a,n,0,1,2);
    setVal(a,n,1,0,3);
    setVal(a,n,1,1,4);
    setVal(a,n,1,2,5);
    setVal(a,n,2,1,6);
    setVal(a,n,2,2,7);
    disp(a,n);
}

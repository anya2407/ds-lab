#include <bits/stdc++.h>

using namespace std;

void setVal(int a[], int n, int i, int j, int v) {
    if (i>=j) a[i*(i+1)/2+j]=v;
    else a[j*(j+1)/2+i]=v;
}

int getVal(int a[], int n, int i, int j) {
    if (i>=j) return a[i*(i+1)/2+j];
    else return a[j*(j+1)/2+i];
}

void disp(int a[], int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<getVal(a,n,i,j)<<" ";
        cout<<endl;
    }
}

int main(){
    int n=3;
    int a[n*(n+1)/2]={0};
    setVal(a,n,0,0,1);
    setVal(a,n,0,1,2);
    setVal(a,n,0,2,3);
    setVal(a,n,1,1,4);
    setVal(a,n,1,2,5);
    setVal(a,n,2,2,6);
    disp(a,n);
}

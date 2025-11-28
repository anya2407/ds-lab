#include<bits/stdc++.h>
using namespace std;

int heapArr[50],sz=0;
void insertPQ(int x){

    heapArr[sz]=x;

    int i=sz;
    sz++;

    while(i>0 &&heapArr[(i-1)/2]<heapArr[i])
    {swap(heapArr[i],heapArr[(i-1)/2]);
        i=(i-1)/2;
    }
}

int deletePQ(){
    if(sz==0) return -1;
    int r=heapArr[0];

    heapArr[0]=heapArr[sz-1];
    sz--;
    int i=0;
    while(1) 
{      int l=2*i+1,rgt=2*i+2,b=i;
        if(l<sz && heapArr[l]>heapArr[b]) b=l;
        if(rgt<sz && heapArr[rgt]>heapArr[b]) b=rgt;
        if(b==i) break;
        swap(heapArr[i],heapArr[b]);
        i=b;

    }
    return r;

}
int main(){

    insertPQ(40);
    insertPQ(20);
    insertPQ(50);
    insertPQ(10);
    cout<<deletePQ()<<endl;
    cout<<deletePQ()<<endl;
}

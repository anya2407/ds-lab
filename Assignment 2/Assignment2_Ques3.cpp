#include<bits/stdc++.h>

using namespace std;

int linear(int*arr, int size){
    for(int i = 0; i<size; i++){
        if(arr[i] != i+1) return arr[i]-1;
    }
    return 0;
}

int binary(int*arr, int size){
    int low = 0;
    int high = size-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] != mid + 1){
            if(arr[mid-1] == mid) return mid+1;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Missing member is "<<linear(arr,size)<<endl;
    cout<<"Missing member is "<<binary(arr,size);

    return 0;
}
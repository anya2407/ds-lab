#include<bits/stdc++.h>

using namespace std;

int inversion(int *arr, int size){
    int count = 0;
    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] > arr[j]) count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {1,2,5,3,4,6,9,4,5}; //2 Inversions
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<inversion(arr, size);
}
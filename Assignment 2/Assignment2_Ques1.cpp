#include<bits/stdc++.h>

using namespace std;

int linearSearch(int *arr, int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target) return i;
    }
    return -1;
}

int binarySearch(int *arr, int size, int target){
    int low = 0;
    int high = size-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(target == arr[mid]) return mid;
        if(target>arr[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,5,6,8,15,19,24,31,42}; //Sorted array to demonstrate Binary search
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<linearSearch(arr, size, 15)<<endl;
    cout<<binarySearch(arr, size, 15);

    return 0;
}
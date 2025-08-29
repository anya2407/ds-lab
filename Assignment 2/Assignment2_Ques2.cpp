#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int*arr, int size){
    for(int i = 0; i < size-1; i++){
        bool flag = 0;
        for(int j = 0; j < size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
        if (flag != 1) break;
    }
    return;
}

int main(){
    int arr[] = {4,2,6,4,9,12,16,14,13};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" "; //Prints sorted array
    }

    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int distinct(int *arr, int size){
    int c = 0;
    vector<int> unique = {};
    for(int i = 0; i<size; i++){
        if(count(unique.begin(), unique.end(), arr[i])==0){
            unique.push_back(arr[i]);
            c++;
        }
    }
    return c;
}

int main(){
    int arr[] = {1,2,5,3,4,6,9,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<distinct(arr, size);
}
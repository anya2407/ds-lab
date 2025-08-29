#include<bits/stdc++.h>

using namespace std;

void reverse(int *arr, int n){
    int start = 0, end = n-1;
    while(start < end){
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
}

void displayArr(int* arr, int n){
    cout<<"\n[";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]\n";
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int *arr = (int*)malloc(n*sizeof(int));

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "\nOriginal array: ";
    displayArr(arr, n);

    reverse(arr, n);

    cout << "\nReversed array: ";
    displayArr(arr, n);

    return 0;
}
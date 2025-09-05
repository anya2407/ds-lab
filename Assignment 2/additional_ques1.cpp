#include <bits/stdc++.h>
using namespace std;

int countPairs(int arr[], int n, int k) {
    sort(arr, arr+n);  

    int i = 0;
    int j = 1;
    int count = 0;
    while (i < n && j < n) {
        if (i!=j && arr[j]-arr[i]==k) {
        
            count++;
            j++;
        }
        else if (arr[j] - arr[i] < k) {
        j++;}
        else {
            i++;}
    }
    return count;
}

int main() {
    int arr[] = {1,5,3,4,2};
    int n = 5, k = 3;
    cout<< countPairs(arr, n, k);
}

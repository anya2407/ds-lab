#include <bits/stdc++.h>
using namespace std;
void duplicateTwos(vector<int>& arr){
    int n = arr.size();
    int count2 =count(arr.begin(), arr.end(), 2);
    int i =n-1, j =n+count2 -1;
    arr.resize(j+1);
    while(i>=0 && j>= 0){
        if (arr[i] == 2){
            arr[j--] = 2;
            arr[j--] = 2;
        } else
         {
            arr[j--] = arr[i];
        }
        i--;
    }
    arr.resize(n); 
}

int main() {
    vector<int> arr = {1,2,3,2,4,5,2};
    duplicateTwos(arr);
    for (int x : arr) cout << x <<endl;
}

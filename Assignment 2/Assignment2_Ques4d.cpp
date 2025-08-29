#include<bits/stdc++.h>

using namespace std;

void bubbleSort(char*arr){
    int size = strlen(arr);
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
    char str1[100] = "KDSJFLSDFJkdsjfksdjf";
    bubbleSort(str1); //We can simply sort the character array to arrange elements in Alphabetical(ASCII) order.
    cout<<str1;

    return 0;
}
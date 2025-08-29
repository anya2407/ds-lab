#include<bits/stdc++.h>

using namespace std;

void lower(char*arr){
    int size = strlen(arr);
    for(int i = 0; i < size; i++){
        if(arr[i]<='Z' && arr[i]>='A') arr[i] += ('a'-'A');
    }
    return;
}

int main(){
    char str1[100] = "heLLO i aM iShaAN";
    lower(str1);
    cout<<str1;

    return 0;
}
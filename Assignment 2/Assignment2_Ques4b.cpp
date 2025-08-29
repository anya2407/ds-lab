#include<bits/stdc++.h>

using namespace std;

void reverseStr(char *s1){
    int start = 0;
    int end = strlen(s1)-1;
    while(start<end){
        char temp = s1[start];
        s1[start] = s1[end];
        s1[end] = temp;
        start++;end--;
    }
}

int main(){
    char str1[100] = "Hello !@#";
    reverseStr(str1);
    cout<<str1;

    return 0;
}
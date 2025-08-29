#include<bits/stdc++.h>

using namespace std;

void concatenate(char *s1, char *s2){
    int j = 0;
    int i;
    int length = strlen(s1)+strlen(s2);
    for(i = strlen(s1); i<length; i++){
        s1[i] = s2[j];
        j++;
    }
    s1[i] = '\0';
    return;
}

int main(){
    char str1[100] = "Hello ";
    char str2[100] = "World!";
    concatenate(str1,str2);
    cout<<str1;

    return 0;
}
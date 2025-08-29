#include<bits/stdc++.h>

using namespace std;

void removeVowel(char *s){
    int j = 0;
    for(int i = 0; s[i] != '\0'; i++){
        char c = toupper(s[i]);
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            continue;
        }
        s[j++] = s[i];
    }
    s[j] = '\0';
}

int main(){
    char str1[100] = "Hello, I am Ishaan";
    removeVowel(str1);
    cout<<str1;

    return 0;
}
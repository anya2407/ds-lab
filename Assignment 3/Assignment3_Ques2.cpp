#include <bits/stdc++.h>

using namespace std;
int top = -1;
string reverseUsingStack(string s) {
char str[100];
int t = -1;

for (int i = 0; i < s.length(); i++)
 {
   str[++t] = s[i];
}

string r = "";
   while (t != -1) {
        r += str[t--];
}
   return r;
}
int main() {
    string input;
    cout<< "Enter a string:";
    getline(cin, input);   

    string rev = reverseUsingStack(input);
    cout << "Reversed string:" << rev ;
    return 0;
}


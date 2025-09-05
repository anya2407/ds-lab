#include <bits/stdc++.h>
using namespace std;
bool isanagram(string s1, string s2) {

    if (s1.size() != s2.size())
    {return false;}
    sort (s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1==s2){
        return true;}
    else
    {
      return false;
}
}

int main() {
    string s1 = "listen", s2 = "silent";
    cout<<(isanagram(s1, s2) ? "yes" : "no");
}


#include <bits/stdc++.h>
using namespace std;

bool checkbalanced(string exp) {
    stack<char> st;

    for (char ch : exp) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) return false; 
            char top = st.top();
            st.pop();
            if ((ch ==')' && top !='(' ) || (ch =='}' && top != '{') || (ch ==']' && top != '[' )){

                return false;
            }
        }
    }
     return st.empty();
}

int main() {
    string exp;
    cout <<"Enter an expression: "<<endl;
    cin >> exp;

    if (checkbalanced(exp))
        cout << "Expression has balanced parentheses\n"<<endl;
    else
        cout <<"Expression does NOT have balanced parentheses\n"<<endl;

    return 0;
}

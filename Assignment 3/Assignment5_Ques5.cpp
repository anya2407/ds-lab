#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string postfix) {
    stack<int> st;

    for (char ch : postfix) {
        
        if (isdigit(ch)) {
             st.push(ch - '0'); 
        }
        
        else {
             int b =  st.top() ; st.pop();
             int a = st.top() ; st.pop();

            switch (ch) {
                case '+': st.push (a + b);  break;
                case '-': st.push (a - b); break;
                case '*': st.push (a * b);  break;
                case '/': st.push (a / b); break;
            }
        }
    }

    return st.top(); 
}

int main() {
    string postfix;
    cout << "Enter postfix expression: ";
    cin >> postfix;

    int result = evaluatePostfix(postfix);
    cout << "Result = " << result << endl;

    return 0;
}

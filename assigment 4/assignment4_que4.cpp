#include <iostream>
#include <queue>

using namespace std;

int main() 
{
    string s ;

    cout<<"enter a string:  " ;

    cin>> s;

    queue<char> q;

    int freq[256] =  {0} ;

    cout <<"first non-repeating sequence:" ;
    for (int i =0;i<s.size(); i++) 
     {
        char ch = s[i];

         freq[ch]++  ;
        q.push(ch);

        
        while(!q.empty() &&freq[q.front()] >1)   {
             q.pop();
         }

        if (q.empty()) cout << -1 << " ";
        else cout << q.front() << " ";}
    
     cout <<"\n";


     
    return 0;
}


 



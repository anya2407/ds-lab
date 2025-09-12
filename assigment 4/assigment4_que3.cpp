#include <iostream>
#include <queue>

using namespace std;

int main()
 {

    queue<int> q1,q2;

    int n,x;

    cout <<"enter number of elements (even):  ";

    cin >>n;

    cout <<"enter elements: "  ;
    for(int i = 0; i < n / 2; i++)
     {
        cin >> x;

         q1.push(x);}
    
    for(int i = 0; i < n / 2; i++)
       {
          cin >> x;
        q2.push(x);
       }

    cout <<"interleaved queue: ";
    while (!q1.empty() && !q2.empty())
      {
        cout << q1.front()<< " " ;
         q1.pop();
        cout <<q2.front() <<" "  ;
        q2.pop() ;
      }


    cout << "\n";




    
    return 0;
}


 



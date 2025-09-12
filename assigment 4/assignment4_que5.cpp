#include <iostream>
#include <queue>

using namespace std;

int main() 
{
    queue<int> q;

    int ch,x;

    do
      {
        cout <<"  \n1.push\n2.pop\n3.display\n4.exit\n  " ;
        cout <<"enter choice:  ";

        cin >>ch;

        switch(ch)
           {
            case 1:
                cout <<"enter element: ";

                cin >> x;

                q.push(x);
                for(int i = 0; i < q.size() - 1; i++)   {
                    q.push(q.front()); 
                    q.pop();}

                 break;

             case 2:
                if (q.empty()) 
                {cout << "stack empty\n";}
                else {
                    cout<<"popped:" <<q.front()<<"\n";
                     q.pop();
                }

                break;


            
            case 3:

                if (q.empty()) 
                {cout << "stack empty\n";}
                else  {
                    cout << "stack: ";
                    queue<int> t = q;

                    while (!t.empty())
                     {
                        cout << t.front() << " ";
                        t.pop();
                      }
                    cout << "\n";
                 }


                 break;
        }

    } while (ch != 4);




    
    return 0;
}

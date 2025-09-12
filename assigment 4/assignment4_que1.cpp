#include<iostream>
using namespace std;
int N =5;
int q[5], f = -1, r = -1;

void enq(int x) {
    cout<<"what number do u want to enter";
    if(r == N - 1){
         cout << "Queue is Full\n";
         return;
    }

    if(f==-1) 
    { 
      f = 0;
    }
    q[++r] = x;
}

void deq() {
    cout<<"what number do u want to remove";
    if(f==-1 || f>r)
    {

        cout<<"Queue Empty\n";

        return;
    }

    cout <<"Removed"<<q[f++]<<"\n";
}

void dis(){
    if(f==-1 || f>r)   
    {
         cout<< "Queue Empty\n";

        return;
    }

    for(int i=f; i<=r;i++)
     {cout <<q[i]<<" ";
    }
    cout <<"\n ";
}

void peek() 
{
    if(f==-1 || f>r) 
    {cout<<"Queue Empty \n";
    }

     else cout<< q[f]<< " \n ";
}

int main(){
    int c,x;
    while(1) 
    {
        cout  <<" 1 -Enq 2 -Deq 3- Dis 4 -Peek 5- Exit \n";
        cin >>c;
        switch(c) {
            case 1:cin >> x; enq(x); break;
            case 2:deq();  break ;
            case 3:dis() ;  break;
            case 4:peek(); break ;
            case 5: return 0;
            default: cout <<"Wrong  Choice\n";
        }
    }
}

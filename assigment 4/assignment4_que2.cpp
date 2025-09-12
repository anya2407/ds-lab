#include <iostream>
using namespace std;
int N=5;
int q[5], f = -1, r = -1;

void enq(int x)
 {
    if ((f ==0 && r ==N-1) || (r+1)% N ==f){
         cout<<  "Queue is Full \n";
        return;
    }
    if(f== -1)
     {f = 0;}
    r =(r+1)% N;
    q[r] = x;
    cout<<  "Inserted "<<x<< " \n";
}

void deq(){

    if (f == -1)
     {
        cout <<"Queue is Empty \n";
        return;
    }
    cout <<"Removed "<< q[f] << "\n";

    if (f ==r)
     {f =r = -1;}

    else
    {f = (f+1) % N;}
}
void dis() 
{
    if(f==-1)  
    {

        cout<< "Queue is Empty \n ";

        return;
    }

    cout <<"queue elements:  ";
    int i =f;
    while(true)  {
        cout <<q[i] <<" ";
        if (i ==r)
        { break;}

        i = (i+1) % N;
    }

    cout << "\n";
}

void peek(){
    if (f==-1) cout<<"Queue is Empty \n ";
    else 
    {cout <<"Front Element:  " <<q[f]<< " \n";}
}

int main()
 {
    int c,x;
    while (1) {
        cout <<  " \nMenu:\n 1.Enqueue\n 2.Dequeue\n 3Display\n 4.Peek\n 5.Exit\n";
        cout <<"enter  your choice:  ";
        cin >> c;
        switch (c) {
            case 1: cout <<  "Enter value: "; cin >> x; enq(x); break;
            case 2:  deq();break ;
            case 3 : dis();break;
            case 4:peek(); break ;
            case 5: cout << "exiting...\n"; return 0;
            default: cout <<"Invalid Choice\n" ;
        }
    }
}

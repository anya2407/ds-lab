#include <bits/stdc++.h>

using namespace std;

int stackarr[100];
int top = -1;
bool isEmpty(){
  return (top == -1);
}

bool isFull(){
    return (top == 100 - 1);
}

void push(int x) {
    if (isFull()) {
        cout << "Stack filled"<<endl;
    } 
    else {
        top++;
        stackarr[top] = x;
    }
}
void pop() {
    if (isEmpty()) {
         cout << "Stack is empty"<<endl;
    } else {
       cout << stackarr[top];
       top--;
    }
}
void peek() {
    if (isEmpty()) {
        cout <<"Stack is empty"<<endl;
    } else {
        cout <<"Top element:" << stackarr[top];
    }
}
void display() {
    if(isEmpty()){
        cout << "Stack is empty";
    }
    else{
        for ( int i = top; i >=0; i--)
        {
            cout<<stackarr[i];
        }
        
    }
}

int main(){
    int choice;
    int x;

    
    while (true)
    {
        cout << "1-Push ";
    cout << "2-Pop ";
    cout << "3-Peek ";
    cout << "4-Display ";
    cout << "0-Exit "<<endl;
    cout << "Enter your choice- ";
    cin >> choice;
    
        switch (choice) {
               case 0:
                cout<<"exit";

                case 1:
                cout << "Enter number you want to push: ";
                cin >> x;
                push(x);
                break;

                case 2:
                    pop();
                    break;
                case 3:
                    peek();
                    break;
                case 4:
                display();
                break;
                
                }
        }
}

#include <iostream>
using namespace std;
class Node{
    public:
    char data;
    Node *next;
    Node *prev;
};

int main(){
    Node *head=NULL, *temp=NULL, *newNode=NULL;
    char arr[5]={'r','a','d','a','r'};
    int i;
    
    for(i=0;i<5;i++){

        newNode = new Node();
        newNode->data = arr[i];
        newNode->next = NULL;
        newNode->prev = NULL;
        
        if(head==NULL){
            head = newNode;
            temp = newNode;

        } else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
    
    Node *start = head;
    Node *end = temp;
    bool flag = true;
    
    while(start != end && end->next != start){
        if(start->data != end->data){
            flag = false;
            break;

        }
        start = start->next;
        end = end->prev;
    }

    
    if(flag==true)
        cout<<"Palindrome";
        
    else
        cout<<"Not Palindrome";
    
    return 0;
}

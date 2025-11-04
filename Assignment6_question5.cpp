#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

int main(){
    Node *head = NULL, *temp = NULL, *newNode = NULL;
    int arr[5] = {10,20,30,40,50};
    int i;
    
    for(i=0;i<5;i++){
        newNode = new Node();
        newNode->data = arr[i];
        newNode->next = NULL;
        
        if(head==NULL){
            head = newNode;

            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    temp->next = head;
    

    Node *ptr = head;

    bool isCircular = false;
    
    if(head==NULL){

        cout<<"Empty list" ;

        return 0;
    }
    
    while(ptr->next != NULL && ptr->next != head){
        ptr = ptr->next;

    }
    
    if(ptr->next == head){
        isCircular = true;
    }
    
    if(isCircular)
        cout<<"Linked List is Circular";
    else
    
        cout<<"Linked List is Not Circular";
    
    return 0;
}

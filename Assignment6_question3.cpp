#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
};
int main(){
  
    Node *head = NULL;
    Node *temp = NULL;
    Node *newNode = NULL;

    int arr[5] ={10,20,30,40,50};
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
    
    int count=0;
    temp = head;
    
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    
    cout<<"Size of Doubly Linked List: "<<count;
    
    return 0;
}

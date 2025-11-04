#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

int main(){
    
    Node *head = NULL;
    Node *temp = NULL;
    Node *newNode = NULL;
    int i;
    int arr[5] = {20,100,40,80,60};
    
    for(i=0;i<5;i++){
        newNode = new Node();
        newNode->data = arr[i];
        newNode->next = NULL;
        
        if(head==NULL){
            head = newNode;
            temp = newNode;
        }
        else{

            temp->next = newNode;
            temp = newNode;

        }
    }
    temp->next = head;
    
    Node *t = head;
    while(t->next!=head){

      cout<<t->data<<" ";
      t = t->next;
    }
    cout<<t->data<<" "<<head->data;
    
    return 0;
}

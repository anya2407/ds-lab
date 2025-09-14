#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
    int data;
    node* next;

};

node* head = NULL;

void insertstart() 
{
    int value;

    cout <<"enter value to insert at beginning:  ";
    cin>>value;

    node* newnode = new node;

    (*newnode).data =value;
    (*newnode).next =head;
    head=newnode;

}
void insertend() 
{
    int value;
    cout<<"enter value:";
    cin>>value;

    node* newnode =new node;

    (*newnode).data=value;
    (*newnode).next = NULL;

    if (head == NULL)
      {
        head = newnode;
        return; }

    node* temp =head;
    while(  (*temp).next != NULL  ) 
    {
        temp = (*temp).next;
    }
    (*temp).next =newnode;
    
  }
  void insertafter() {
    int key,value;
    cout << "enter value after wich to insert: ";
    cin >> key;
    cout << "enter new value: ";
    cin >> value;

    node* temp =head;
    while(temp!= NULL && (*temp).data != key)
     {
        temp=(*temp).next;
    }
    if(temp==NULL) 
      {
        cout <<"error- no node\n";

        return;
    }

    node* newnode = new node;
    (*newnode).data = value;
    (*newnode).next = (*temp).next;
    (*temp).next = newnode;
}

void insertbefore(){
    int key,value;
    cout<<"enter value before which to insert";
    cin>>key;
    cout<<"enter value you want to insert";
    cin>>value;

    if(head == NULL) 
     { cout<<"list is empty";
       return;
    }

    if((*head).data==key) 
    {    node* newnode = new node;
         (*newnode).data=value;
        (*newnode).next=head;
        head = newnode;
        return; }

    node* temp=head;

    while((*temp).next !=NULL && (*(*temp).next).data !=key) 
    {
        temp=(*temp).next;
     }

    if((*temp).next==NULL)
     {
        cout<<"node not found";
        return;
    }

    node* newnode =new node;
    (*newnode).data= value;
    (*newnode).next =(*temp).next;
    (*temp).next =newnode;
}
void deletebegin(){
    if(head==NULL){
        cout<<"linked list is empty";
        return;
    }
    node* temp=head;
    head =(*head).next;
    delete temp;
}
void deleteend() {
    if(head ==NULL) {
        cout <<"list is empty\n";
        return;
      }
    if((*head).next ==NULL) {
         delete head;
         head =NULL;
         return;}
    
    node* temp=head;
    while((*(*temp).next).next !=NULL) 
    {
        temp =(*temp).next;}
    
    delete (*temp).next;
    (*temp).next =NULL;

}
void display(){
    if(head == NULL) 
      {  cout << "list is empty\n";
         return;}

    node* temp=head;
    cout<<"list: " ;
    while(temp !=NULL) 
    {   cout << (*temp).data <<endl;
        temp = (*temp).next;}
       
}
int main()
{
    int n;
    cout<<"1.insert at start\n 2.insert at end\n 3.insert after an element\n 4.insert after an element\n 5.delete from begining\n 6.delete from end\n 7.delete a specific node\n 8.search for a node\n 9.display";
    cout<<"enter number";
    cin>>n;
    switch (n)
    {
     case 1:
     insertstart(); 
     break;

     case 2:
     insertend();
     break;

     case 3:
     insertafter();
     break;

     case 4:
     insertbefore();
     break;

     case 5:
     deletebegin();
     break;

     case 6:
     deleteend();
     break;

     case 7:
     break;

     case 8:
     break;

     case 9:
     display();
     break;

    
     default:
        break;
    }
    return 0;
}





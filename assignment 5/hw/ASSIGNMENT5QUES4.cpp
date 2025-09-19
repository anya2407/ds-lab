#include <bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    Node* next;

    Node(int x){
        val=x;
        next=NULL;}
};
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr != NULL){
        Node* nextnode = curr->next; 

        curr->next = prev;              
        prev = curr;                     
        curr = nextnode;     }            
    
      return prev;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next != NULL){
             cout<<"->";}
        head = head->next;

    }
    cout << endl;
}
int main() {
    Node* head  = new Node(1);
    head->next =  new Node(2);
    head->next ->next = new Node(3);
    head ->next-> next->next = new Node(4);
    head->next-> next->next-> next  = new Node(5);
     head = reverseList(head);
    cout <<"Reversed List: ";
    printList(head);
    return 0;
}


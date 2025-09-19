#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int x){
        val=x;
        next=NULL;}
};
Node* middleNode(Node* head) {
    Node*temp =  head;
    Node* mid= head;

    int c=1;
    while (temp->next != NULL) {
        temp = temp->next;
        c++;
        if (c%2==0){
            mid =mid->next;

         }
     }
     return mid;
    }

int main() {

    Node* head =new Node(1);
    head->next = new Node(2);
    head->next->next =new Node(3);
    head->next->next->next =new Node(4);
    head->next->next->next->next =new Node(5);
    cout <<"middle: " ;
    Node* mid=middleNode(head);
    cout<<mid->val;
    
    return 0;
}

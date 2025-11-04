#include <iostream>
using namespace std;
class Node {
public:

    int data;
    Node* next;
    Node* prev;
    Node(int val) {

        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyCircular {
public:

    Node* head;
    DoublyCircular() 
    {
        head = NULL;
    }

    void insertFirst(int val){
        Node* n =new Node(val);
        if (head == NULL){
            n->next = n;
            n->prev = n;
            head = n;
            cout << "node inserted\n";
            return;
        }
        Node* tail =head->prev;
        n->next = head;
        n->prev =tail;
        tail->next =n;
        head->prev =n;
        head = n;
        cout <<"inserted first\n";
    }

    void insertLast(int val){
        Node* n = new Node(val);
        if (head == NULL) {
            head = n;
            n->next =n;
            n->prev= n;
            cout << "inserted ok\n";
            return;
        }

        Node* tail =head->prev;
        tail->next =n;
        n->prev =tail;
        n->next= head;
        head->prev =n;
        cout <<"added at end\n";

    }

    void insertAfter(int key, int val) 
    {
        if(head == NULL){

            cout << "empty list\n";
            return;
        }
        Node* temp = head;
        do{
            if(temp->data ==key) {
                Node* n =new Node(val);
                Node* nxt = temp->next;
                temp->next = n;
                n->prev = temp;
                n->next = nxt;
                nxt->prev = n;

                cout << "inserted after" << key;
                return;
            }
            temp = temp->next;
        } while (temp != head);

        cout <<"key not found\n";
    }

    void deleteNode(int key) {
        if (head == NULL) {
            cout << "empty\n";
            return;
        }
        Node* temp = head;
        bool found = false;
        do {
            if (temp->data == key) {
                found = true;
                break;
            }
            temp = temp->next;
        } while (temp != head);

        if (!found) {
            cout << "not found\n";
            return;
        }
        if (temp->next == temp) {
            head = NULL;
        } else {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;

            if (temp == head){
            head = temp->next;}
        }

        cout << "deleted"<< key << "\n";

    }

    void search(int key) {

        if (head == NULL){
            cout << "list empty\n";
            return;
        }

        Node* temp =head;
        int pos =1;
        do {
            if (temp->data == key){
                cout << "found at " << pos << "\n";
                return;

            }
            pos++;

            temp = temp->next;

        } while (temp != head);
        cout << "not found\n";
    }
    void display() {
        if (head == NULL) {
            cout << "no nodes\n";
            return;
        }
        Node* temp = head;
        cout << "List: ";
        do {
            cout << temp->data << " <-> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(circular)\n";
    }
};
int main() {
    DoublyCircular dl;
    int ch, v, k;
    while (1) {
        cout << "\n1. Insert first\n2. Insert last\n3. Insert after\n4. Delete\n5. Search\n6. Display\n7. Exit\nEnter choice: ";
        cin >> ch;
        if (ch == 1) {
            cout << "val: ";
            cin >> v;
            dl.insertFirst(v);
        } else if (ch == 2) {
            cout << "val: ";
            cin >> v;
            dl.insertLast(v);

        } else if (ch == 3) {

            cout << "key: ";
            cin >> k;
            cout << "val: ";
            cin >> v;
            dl.insertAfter(k, v);

        } else if (ch == 4) {

            cout << "key: ";
            cin >> k;
            dl.deleteNode(k);
        } else if (ch == 5) {

            cout << "val: ";
            cin >> v;
            dl.search(v);
        } else if (ch == 6) {
            dl.display();

        } else if (ch == 7) {

            cout << "bye\n";
            break;

        } else {
            cout << "wrong choice\n";
        }
    }
    
    return 0;
}

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        

        data = val;
        next = NULL;
    }
};

class CircularList {
public:
    Node* head;
    CircularList(){
        head = NULL;

    }

    void insertFirst(int val){
        Node* n = new Node(val);

        if (head == NULL){

            head = n;
            n->next = n;
            cout << "node inserted\n";

            return;
        }

        Node* temp = head;
        while (temp->next != head){
            temp = temp->next;}
        temp->next = n;
        n->next = head;
        head = n;
        cout <<"inserted first\n";

    }

    void insertLast(int val){

        Node* n = new Node(val);
        if (head == NULL){
            head =n;
            n->next =n;
            cout <<"inserted ok\n";
            return;
        }
        Node* temp = head;

        while(temp->next != head){
            temp = temp->next;}
        temp->next = n;
        n->next = head;
        cout << "added at end\n";
    }

    void insertAfter(int key, int val) {
        if (head == NULL) {
            cout << "empty list\n";
            return;
        }
        
        Node* temp = head;
        do{
            if (temp->data == key) {
                Node* n = new Node(val);

                n->next = temp->next;
                temp->next =n;
                cout <<"inserted after "  << key << "\n" ;
                return;
            }
            temp = temp->next;

        } 
        while (temp != head);
        cout << "key not found\n";
    }

    void deleteNode(int key) {
        if (head == NULL) {
            cout << "empty\n";
            return;
        }
        Node* curr = head;
        Node* prev = NULL;
        do {
            if (curr->data == key) {
                if (curr == head && curr->next == head) {
                    head = NULL;
                } else if (curr == head) {
                    Node* temp = head;
                    while (temp->next != head)
                        temp = temp->next;
                    head = head->next;
                    temp->next = head;
                } else {
                    prev->next = curr->next;
                }
                cout << "deleted " << key << "\n";
                return;
            }
            prev = curr;
            curr = curr->next;
        } while (curr != head);
        cout << "not found\n";
    }

    void search(int key) {
        if (head == NULL) {
            cout << "list empty\n";
            return;
        }
        Node* temp = head;
        int pos = 1;
        do {
            if (temp->data == key) {
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
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(circular)\n";
    }
};

int main() {
    CircularList cl;
    int ch, v, k;
    while (1) {
        cout << "\n1. Insert first\n2. Insert last\n3. Insert after\n4. Delete\n5. Search\n6. Display\n7. Exit\nEnter choice: ";
        cin >> ch;
        if (ch == 1) {
            cout << "val: ";
            cin >> v;
            cl.insertFirst(v);
        } else if (ch == 2) {
            cout << "val: ";
            cin >> v;
            cl.insertLast(v);
        } else if (ch == 3) {
            cout << "key: ";
            cin >> k;
            cout << "val: ";
            cin >> v;
            cl.insertAfter(k, v);
        } else if (ch == 4) {
            cout << "key: ";
            cin >> k;
            cl.deleteNode(k);
        } else if (ch == 5) {
            cout << "val: ";
            cin >> v;
            cl.search(v);
        } else if (ch == 6) {
            cl.display();
        } else if (ch == 7) {
            cout << "bye\n";
            break;
        } else {
            cout << "wrong choice\n";
        }
    }
    return 0;
}

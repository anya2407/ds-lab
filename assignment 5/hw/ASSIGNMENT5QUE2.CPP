#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};


int main() 
 {  ListNode* head = new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(1);
    head->next->next -> next= new ListNode(2);
    head->next ->next->next->next=new ListNode(1);
    head->next->next->next->next-> next =new ListNode(3);
    head-> next-> next->next->next ->next->next=new ListNode(1);


    int key=1;
    int count=0;

    cout<<"Original List: ";
    ListNode* t=head;
    while(t != NULL) 
     {
       cout << t->val;

       if (t->next != NULL) cout << "->";
       t = t->next;

     }
    cout << endl;
    while (head != NULL && head->val == key) {
        ListNode* del = head;
        head = head->next;
        delete del;

        count++;

    }
    ListNode* curr = head;
    while(curr!=NULL && curr->next!=NULL)
     {

        if(curr->next->val == key){
            ListNode* del = curr->next;
            curr->next = curr->next->next;
            delete del;

            count++;
        } else {
            curr = curr->next;
        }
     }

    cout<<"Count: "<<count <<endl;

    cout <<"Updated List: ";

    ListNode* temp2 = head;

    if (temp2 ==NULL) 
      {
        cout << "Empty";
    }
    while (temp2 != NULL) {
         cout << temp2->val;
        if (temp2->next!=NULL) 
        {cout <<"->";}
       
        temp2 = temp2->next;
    }

    cout << endl;
    return 0;
}

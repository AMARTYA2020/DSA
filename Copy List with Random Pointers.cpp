#include<bits/stdc++.h>
using namespace std;

// COPY LIST WITH RANDOM POINTER:
class solution{
public:
    Node* copyRandomList(Node* head){
        // CREATING NORMAL LINKED LIST THAT HAS A DATA FIELD AND ADDRESS FIELD:
        Node* curr=head;
        while(curr!=NULL){
            Node* next=curr->next;
            curr->next=new Node(curr->val);
            curr->next->next=next;
            curr=next;
        }
        curr=head;
        while(curr!=NULL){
            if(curr->random!=NULL){
                curr->next->random=curr->random->next;
            }else{
                curr->next->random=NULL;

            }
            curr=curr->next->next;
        }
        Node* newhead=new Node(0);
        Node* copycurr=newhead;
        curr=head;
        while(curr!=NULL){
            copycurr->next=curr->next;
            curr->next=copycurr->next->next;
            curr=curr->next;
            copycurr=copycurr->next;
        }
        return newnode->next;
    }
};

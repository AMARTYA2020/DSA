#include<bits/stdc++.h>
using namespace std;

Node* pairwise(Node* root)
{       // all about interchanging data as its passed by value.....
    if(head==NULL || head->next==NULL)
        return head;
    Node* curr=head;
    while(curr!=NULL)
    {
        int temp=curr->data;
        curr->data=curr->next->data;
        curr->next->data=temp;

        curr=curr->next->next;
    }
    return head;
}






















#include<bits/stdc++.h>
using namespace std;

ListNode* addtwonumbers(ListNode* l1,ListNode* l2)
{
    ListNode* newnode=new ListNode();
    ListNode* temp=newnode;
    int carry=0;
    while(l1!=NULL || l2!=NULL || carray){
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->val;
        }
        sum=sum+carry;
        carry=sum/10;
        ListNode* newnode2=new ListNode(sum%10);
        temp->next=newnode2;
        temp=temp->next;
    }
    return newnode->next;

}























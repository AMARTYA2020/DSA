#include<bits/stdc++.h>
using namespace std;

Node* sum_of_Nodes(Node* l1,Node* l2)
{
    Node* newnode=new Node();
    Node* temp=newnode;
    int carry=0;
    while(l1!=NULL || l2!=NULL || carry){
        int sum=0
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->next;
        }
        sum=sum+carry;
        carry=sum/10;
        Node* newnode2=new Node(sum%10);
        temp->next=newnode2;
        temp=temp->next;
    }
    return newnode->next;
}



































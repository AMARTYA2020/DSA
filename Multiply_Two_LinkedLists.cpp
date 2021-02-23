#include<bits/stdc++.h>
using namespace std;

long long multiply_two_linkedlists(Node* l1,Node* l2)
{
    long long int num1=0,num2=0;
    long long int 1000000007;
    while(l1!=NULL || l2!=NULL){
        if(l1!=NULL){
            num1=(num1*10+l1->data)%x;
            l1=l1->next;
        }
        if(l2!=NULL){
            num2=(num2*10+l2->data)%x;
            l2=l2->next;
        }
    }
    return (num1*nume2)%x;

}

































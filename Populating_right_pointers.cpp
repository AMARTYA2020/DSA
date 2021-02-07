#include<bits/stdc++.h>
using namespace std;

Node* populate(Node* root)
{

    vector<int>ans;//We will store the right most pointers to this vector ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int x=q.size();
        for(int i=0;i<x;i++){
            Node*curr=q.front();
            q.pop();
            if(i!=x-1){
                curr->next=q.front();
            }

            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }

        }
    }
    return root;
}














































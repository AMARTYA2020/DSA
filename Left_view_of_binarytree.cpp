#include<bits/stdc++.h>
using namespace std;

Node* leftview(Node* root)
{
    vector<int>answer;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int x=q.size();
        for(int i=0;i<x;i++){
            Node* curr=q.front();
            q.pop();
            if(i==x-1){
                answer.push_back(curr->data);
            }

            if(root->right!=NULL){
                q.push(root->right);
            }

            if(root->left!=NULL){
                q.push(root->left);
            }

        }
    }
    return answer;
}







































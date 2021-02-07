#include<bits/stdc++.h>
using namespace std;

Node* rightview(Node* root)
{
    vector<int>ans;
    queue<Node*>q;
    q.pop();
    while(!q.empty()){
        int x=q.size();
        for(int i=0;i<x;i++){
            Node* curr=q.front();
            q.pop();

            if(i==x-1){
                ans.push_back(curr->data);
            }

            if(root->left){
                q.push(root->left);
            }

            if(root->right){
                q.push(root->right);
            }
        }
    }
    return ans;
}














































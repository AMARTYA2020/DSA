#include<bits/stdc++.h>
using namespace std;


void sumtree(Node* root)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        root->data=0;
    }else{
        int left=0,right=0;
        if(root->left){
            left=root->left->data;
            sumtree(root->left);
            left=left+root->left->data;
        }
        if(root->right){
            right=root->right->data;
            sumtree(root->right);
            right=right+root->right->data;
        }

        root->data=left+right;
    }

}

int countleafnodes(TreeNode* root)
{
    if(root==NULL) return 0;
    int count=0;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++){
            TreeNode* curr=q.front();
            q.pop();
            if(curr->left==NULL && curr->right==NULL){
                count++;
            else{
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }

    }
    return count;
    }


























































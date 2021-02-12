#include<bits/stdc++.h>
using namespace std;


//This function returns a Linkedlist created from binary tree in Preorder fashion:
void flatten(TreeNode* root)
{
    if(root==NULL){
        return ;
    }
    stack<TreeNode*>st;
    st.push(root);
    while(!st.empty())
    {
        TreeNode* curr=st.top();
        st.pop();
        if(curr->right) st.push(curr->right);
        if(curr->left) st.push(curr->left);
        if(!st.empty())
            curr->right=st.top();
        curr->left=NULL;

    }
}

void flatten(TreeNode* root)
{
    if(root==NULL)
        return;
stack<TreeNode*>st;
    st.push(root);
    while(!st.empty())
    {
        TreeNode* curr=st.top();
        st.pop();
        if(curr->left) st.push(curr->left);
        if(curr->right) st.push(curr->right);
        if(!st.empty()){
            curr->right=st.top();
            curr->left=NULL;
        }
    }
































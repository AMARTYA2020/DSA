#include<bits/stdc++.h>
using namespace std;


// INORDER TRAVERSAL ITERATIVE VERSION:
class inorder_solution{
vector<int> inorder(TreeNode*root)
{

    vector<int>ans;
    stack<TreeNode*>st;
    TreeNode*curr=root;
    while(curr!=NULL || !st.empty()){
        while(curr!=NULL){
            st.puch(curr);
            curr=curr->left;
        }
        curr=st.top();
        st.pop();
        ans.push_back(curr->val);
        curr=curr->right;
    }
    return ans;
}
};



// PREORDER TRAVERSAL ITERATIVE VERSION:
class preorder_solution{
vector<int> preorder(TreeNode* root,vector<int>&ans)
{
    stack<TreeNode*>st;
   st.push(root);
   while(!st.empty())
   {
       TreeNode*curr=st.top();
       st.pop();
       ans.push_back(curr->val);

       if(curr->right!=NULL){
        st.push(curr->right);
       }

       if(curr->left!=NULL){
        st.push(curr->left);
       }

   }
   return ans;
}

};


// POSTORDER TRAVERSAL ITERATIVE VERSION:
class postorder_solution{
vector<int> postorder(TreeNode* root,vector<int>&ans)
{
    stack<TreeNode*>st;
    st.push(root);
    while(!st.empty()){
        TreeNode*curr=st.top();
        st.pop();
        ans.push_back(curr->val);

        if(curr->left!=NULL){
            st.push(curr->left);
        }

        if(curr->right!=NULL){
            st.push(curr->right);
        }

    }
    reverse(begin(ans),end(end));
    return ans;
}
};



































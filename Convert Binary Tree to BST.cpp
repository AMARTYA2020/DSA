#include<bits/stdc++.h>
using namespace std;

void inorder(Node* root,vector<int>&ans)     // FIRST FINDING THE PREORDER TRAVERSAL AS IT IS ALWAYS IN SORTED ORDER CRUICIAL FOR BST:
{
    if(root!=NULL){
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
}

Node* createBST(vector<int>arr,int l,int h)
{
    if(low>high){
        return NULL;
    }
    int mid=low+(high-low)/2;
    Node* root=new Node(arr[mid]);
    root->left=createBST(arr,low,mid-1);
    root->right=createBST(arr,mid+1,high);
    return root;
}



































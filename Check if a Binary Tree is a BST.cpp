#include<bits/stdc++.h>
using namespace std;

void inorder(Node* root,vector<int>&ans)
{
    if(root!=NULL){
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
}

bool isBST(Node* root)
{
    vector<int>v;
    inorder(root,v);
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>=v[i+1]){
            return false;
        }
    }
    return true;
}


































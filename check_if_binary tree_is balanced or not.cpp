#include<bits/stdc++.h>
using namespace std;

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int hl=height(root->left);
    int h2=height(root->right);
    return (max(h1+h2)+1);
}

bool isBalanced(Node* root)
{

    if(root==NULL){
        return true;
    }
    int x=height(root->left);
    int y=height(root->right);
    if(abs(x-1)<1){
        return false;
    }else{
        return (isBalanced(root->left) && isBalanced(root->right));
    }
    return false;
}

































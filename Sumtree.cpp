#include<bits/stdc++.h>
using namespace std;

Input:
             10
          /      \
        -2        6
       /   \     /  \
     8     -4   7    5

Output:
            20
          /    \
        4        12
       /  \     /  \
     0     0   0    0

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































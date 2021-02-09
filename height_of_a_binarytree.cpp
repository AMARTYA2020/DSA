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

































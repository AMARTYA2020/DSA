#include<bits/stdc++.h>
using namespace std;
// AVL TREES AND RED BLACK TREES ARE THE HEIGHT BALANCED TREE WHICH PREVENT THE FORMATION OF LEFT-SKEWED & RIGHT-SKEWED BINARY TREES: In which the balance factor must be in the range of -1 to +1;

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
    if(abs(x-1)>1){       //IF THE DIFFERENCE OF HEIGHTS IS MORE THEN 1 THEN ITS UNBALANCED 
        return false;
    }else{
        return (isBalanced(root->left) && isBalanced(root->right));
    }
    return false;
}

































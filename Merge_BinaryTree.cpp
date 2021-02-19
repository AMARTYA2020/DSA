#include<bits/stdc++.h>
using namespace std;

TreeNode* mergeBinartree(TreeNode* root1,TreeNode* root2)
{
    if(root1==NULL)
        return root2;
    if(root2==NULL)
        return root1;

    TreeNode* newnode=new TreeNode(root1->data+root2->data);
    newnode->left=mergeBinarytree(root1->left,root2->left);
    newnode->right=mergeBInarytree(root1->right,root2->right);

    return newnode;
}












































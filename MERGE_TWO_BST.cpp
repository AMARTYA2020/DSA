#include<bits/stdc++.h>
using namespace std;

void createarray_INORDER(Node* root,vector<int>&arr)
{
    if(root!=NULL){
        createarray_INORDER(root->left,arr);
        arr.push_back(root->data);
        createarray_INORDER(root->right,arr);
    }
}

vector<int> mergeBST(Node* root1,Node* root2)
{

    vector<int>arr1;
    createarray_INORDER(root1,arr1);
    vector<int>arr2;
    createarray_INORDER(root2,arr2);
    vector<int>arr3(arr1.size()+arr2.size());
    mergeBST(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),arr3.begin());
    return arr3;
}

































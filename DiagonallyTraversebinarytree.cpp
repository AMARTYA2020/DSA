#include<bits/stdc++.h>
using namespace std;

// DIAGONALLY TRAVERSE BINARY TREE;
 vector<int> diagonallytraverse(Node* tree)
 {

     vector<int>ans;
     queue<Node*>q;
     q.push(root);

    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        while(curr){
            if(curr->left) q.push(curr->left);
            ans.push_back(curr->data);
            curr=curr->right;
        }
    }
    return ans;

 }
















#include<bits/stdc++.h>
using namespace std;

// DIAGONALLY TRAVERSE BINARY TREE;
 vector<int> diagonallytraverse(Node* tree)
 {
 // CODE FOR TRAVERSING DIAGONALLY FROM TOP RIGHT FASHION:  SIMILAR TO POST ORDER (right to left) but we code if(curr->left).
     vector<int>ans;
     queue<Node*>q;
     q.push(root);

    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        while(curr){                           // first check weather the current node is zero or not  Modified BFS Traversal
            if(curr->left) q.push(curr->left);
            ans.push_back(curr->data);
            curr=curr->right;                // Keep moving towards right as we digonally traverse from top right
        }
    }
    return ans;

 }

vector<int> diagonllytraverse(Node* tree)
{
 // CODE FOR TRAVERSING DIAGONALLY FROM TOP LEFT FASHION:  SIMILAR TO PRE ORDER (left to right) but we code if(curr->right)
 vector<int>ans;
 queue<Node*>q;
 q.push(root);
 while(!q.empty()){
  Node* curr=q.front();
  q.pop();
  while(curr){
   if(curr->right) q.push(curr->left);
   ans.push_back(curr->data);
   curr=curr->right;
  }
 }
 return ans;
}
   















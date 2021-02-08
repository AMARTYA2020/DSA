#include<bits/stdc++.h>
using namespace std;

void topview(Node* root)
{
    map<int,int>mp;
    queue<Node*>q;
    q.push({root,0});
    while(!q.empty()){
        Node* curr=q.front().first;
        int h=q.front().second;
        q.pop();
        if(mp[h]==NULL){
            mp[h]=curr->data;
        }
        if(curr->left) q.push({curr->left,h-1});
        if(curr->right) q.push({curr->right,h+1});
    }
    for(auto x:mp){
        cout<<x.second<<" ";
    }

}


































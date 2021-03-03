#include<bits/stdc++.h>
using namespace std;

Node* construct(int in[],int post[],int n,int &index,unordered_map<int,int>&mp,int start,int last)
{
    if(start>last){
        return NULL;
    }

    Node* root=new Node(post[index--]);
    int mid=mp[post[index]];
    root->right=construct(in,post,index,mp,mid+1,last);
    root->left=construct(in,post,n,index,mp,start,mid-1);
    return root;
}

Node* buildtree(int in[],int post[],int n){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
            mp[in[i]]=i;

    int index=n-1;
    return construct(in,post,n,index,mp,0,n-1);
}

#include<bits/stdc++.h>
using namespace std;
// Creating Node
struct Node{
    int data;
    struct Node* left,*right;

};

                         Utility function to create a new node
Node* newNode(int data)
{
    Node* temp=new Node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return (temp);
}


queue<Node*>q;
int burntree(Node* root,int targetnode)
{
    if(root==NULL)
        return 0;
    if(root->data==targetnode)
    {
        cout<<root->data<<" ";
        if(root->left)
            q.push(root->left);
        if(root->right)
            q.push(root->right);
        return 1;
    }
    int a =burntree(root->left,targetnode);
    if(a==1){          MEANS WE KNOW THERE IS TARGET IN LEFT NODES
        int x=q.size();
        for(int i=0;i<x;i++){
            Node* curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);

        }
        if(root->right)      WHAT IF RIGHT CHILD EXITS
            q.push(root->right);
        cout<<root->data<<endl;
        return 1;            RETURN STATEMENTS TO PREVENT FURTHER FUNCTION CALLS
    }
    int b=burntree(root->right,targetnode);
    if(b==1){
        int x=q.size();
        for(int i=0;i<x;i++){
            Node* curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        if(root->left)
            q.push(root->left);
        cout<<root->data<<endl;
        return 1;
    }
}

int main()
{
    Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->right->left=newNode(4);
    root->right->right=newNode(5);
    root->right->left->left=newNode(6);
    root->right->left->right=newNode(7);
    root->right->right->left=newNode(8);
    root->right->right->right=newNode(9);
    int targetnode=4;
    burntree(root,targetnode);
    while(!q.empty()){
        int x=q.size();
        for(int i=0;i<x;i++){
            Node* curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
    }
    return 0;
}












int main()
{
    /*      10
           /  \
          12  13
              / \
             14 15
            / \ / \
          21 22 23 24

        Let us create Binary Tree as shown
        above */

    Node* root = newNode(10);
    root->left = newNode(12);
    root->right = newNode(13);

    root->right->left = newNode(14);
    root->right->right = newNode(15);

    root->right->left->left = newNode(21);
    root->right->left->right = newNode(22);
    root->right->right->left = newNode(23);
    root->right->right->right = newNode(24);
    int targetNode = 14;

    // Function call
    burnTree(root, targetNode);

    return 0;
}
Output
14
21 , 22 , 13
15 , 10
23 , 24 , 12











































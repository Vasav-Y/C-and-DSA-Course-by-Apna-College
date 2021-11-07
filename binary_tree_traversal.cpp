/* (1)PREORDER TRAVERSAL */
// add the value of current node in the preorder sequence then first traverse the Left subtree and then traverse the right subtree

/* (2) INORDER TRAVERSAL*/
// first traverse the Left subtree then write the value of the root and then traverse the right subtree

/* (3)  POSTORDER TRAVERSAL*/
// first travel the left subtree then travel the right subtree and then add the value of root in the seqeunce

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}

void postorder(struct Node* root)
{
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

/* 
             1
           /  \
          2    3
        /  | /  |
       4  5 6  7
*/

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // preorder(root);
    // inorder(root);
    postorder(root);

    return 0;
}
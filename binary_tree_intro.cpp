/* In a Binary Tree:-
(i) Each node can have maximum of two children --> Left child and Right Child
(ii) maximum nodes at level L = 2 riased to L
     level 0 will be root , level 1 will be the children of root and so on
(iii) maximum nodes in a tree of Height H is ((2  raised to power H) - 1)
*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    /* 
            1
           / \
        2      3
    */
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    /* 
            1
           / \
        2      3
       / \
     4    5

    */

    return 0;
}
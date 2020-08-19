#include<bits/stdc++.h>
using namespace std;

/* CREATE STRUCTURE FOR OUR TREE */
struct Node
{
    int key;
    Node *right;
    Node *left;
};

/* CREATE NODE OF TREE */
Node *createnode(int key)
{
    Node *node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;

    return node;
}

int main()
{
    Node *root = createnode(1);
    cout << root->key;
    // constructing tree

    root->left = createnode(2);
    root->left->left = createnode(4);

    root->right = createnode(3);
    root->right->left = createnode(5);
}
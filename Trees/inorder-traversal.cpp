

void inorderUtil(Node *root, vector<int> &v)
{
    if(root==NULL)
    return;

    inorderUtil(root->left, v);
    v.push_back(root->key);
    inorderUtil(root->right, v);
}

vector<int> inOrder(Node* root)
{
    vector <int> v;
    inorderUtil(root,v);
    return v;
}


// #include<bits/stdc++.h>
// using namespace std;

// /* CREATE STRUCTURE FOR OUR TREE */

// struct Node
// {
//     int key;
//     Node *right;
//     Node *left;
// };


// /* CREATE NODE OF TREE */

// Node *createnode(int key)
// {
//     Node *node = new Node();
//     node->key = key;
//     node->left = NULL;
//     node->right = NULL;

//     return node;
// }

///////////////////////////////////// insert function here /////////////////////////////////


// int main()
// {
//     Node *root = createnode(10);
//     // cout << root->key;
//     // constructing tree

//     root->left = createnode(4);
//     root->left->left = createnode(2);

//     root->right = createnode(13);
//     root->right->left = createnode(12);

//     vector<int> v = inOrder(root);

//     for(auto i:v)
//     cout << v[i] << " ";

// }
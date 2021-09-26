#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
int h[100];
Node *head = NULL;
Node *createTree(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
vector <int> diagonalSum(Node* root) {
    vector<int> v;
    queue<Node*> q;
    q.push(root);
    
    int size = q.size();
    int sum = 0;
    int count = 0;
    
    while(size--)
    {
        root = q.front();
        sum += root->data;
        while(root)
        {
            if(root->left)
            {
                q.push(root->left);
                ++count;
            }
            if(root->right)
            {
                sum += root->right->data;
            }
            root = root->right;
        }
        if(size == 0)
        {
            size = count;
            count = 0;
            v.push_back(sum);
            sum = 0;
            q.pop();
        }
        else 
            q.pop();
    }
    return v;  
}
int main()
{
    head = createTree(0);
    head->left = createTree(1);
    head->right = createTree(2);
    head->left->left = createTree(4);
    head->left->right = createTree(5);
    head->left->right->left = createTree(7);

    head->right->left = createTree(3);
    head->right->right = createTree(6);

//    head->right->right->right = createTree(9);
    // for(int i=-6; i<6; i++)
    // {
    //     h[i]=0;
    // }

    vector<int> res = diagonalSum(head);
    for(auto i:res)cout << i << " ";
    
    return 0;
}


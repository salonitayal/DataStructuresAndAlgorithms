void postordermain(Node *root, vector<int> &v)
{
    if(root == NULL)
    return;
    
    postordermain(root->left, v);
    postordermain(root->right, v);
    v.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  vector<int> v;
  postordermain(root, v);
  return v;
}
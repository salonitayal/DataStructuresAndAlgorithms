void levelordermain(Node *node, vector<int> &v)
{
  if(node == NULL)return;
  else 
  {
       queue<Node*> q;
       q.push(node);
       while(!q.empty())
       {
           Node* curr = q.front();
           v.push_back(curr->data);
           
           if(curr->left != NULL)
               q.push(curr->left);
            
            if(curr->right != NULL)
               q.push(curr->right);
               
            q.pop();
       }
   }  
}

vector<int> levelOrder(Node* node)
{
    vector<int> v;
    levelordermain(node, v);
    return v;
}
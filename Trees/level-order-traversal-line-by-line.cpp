void levelOrder(Node* root)
{
  if(!root) return;
  queue<Node*> q;
  q.push(root);
  q.push(NULL);
  while(q.size()!=1) {
      root = q.front();
      q.pop();
      if(root!=NULL)
          cout<<root->data<<" ";
      else{
          cout<<"$"<<" ";
          q.push(NULL);
          continue;
      }
      
        if(root->left)            // can use: if(root->left != NULL)
            q.push(root->left);
        if(root->right)
            q.push(root->right);
  }
    cout<<"$"<<" ";
}

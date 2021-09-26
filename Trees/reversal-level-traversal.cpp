void reversePrint(Node *root)
{
    //Your code here
    queue<Node*> q;
    q.push(root);
    vector<int> v;
    while(!q.empty())
    {
        v.push_back(q.front()->data);
        // Be conscious abt right then left side here
        if(q.front()->right)q.push(q.front()->right);
        if(q.front()->left)q.push(q.front()->left);
        q.pop();
    }
    for(int i=v.size()-1; i>=0; i--)cout << v[i] << " ";
}

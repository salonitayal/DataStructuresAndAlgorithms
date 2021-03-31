/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        vector<double> res;

        while(!q.empty())
        {
            double sm = 0;
            int size = q.size(); // most important part of the question
            for(int i=0; i<size; i++)
            {
                TreeNode* node = q.front();
                sm += node->val;
                q.pop();
                if(node->left != NULL)
                q.push(node->left);
            
                if(node->right != NULL)
                q.push(node->right);
            }
            
            res.push_back(sm/size);
            
           
            
            //q.pop();
        }
        return res;
        
    }
};
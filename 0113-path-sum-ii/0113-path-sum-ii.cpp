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
    vector<vector<int>>ans;
    void dfs(TreeNode* root,int t,vector<int>&ds)
    {
        if(!root->left && !root->right)
        {
            if(t-root->val==0)
            {
                 ds.push_back(root->val);
                 ans.push_back(ds);
                ds.pop_back();
            }     
            return;
        }
        if(root->left) 
        {
            ds.push_back(root->val);
            dfs(root->left,t-root->val,ds);
             ds.pop_back();
        }
        
        if(root->right) 
        {
            ds.push_back(root->val);
            dfs(root->right,t-root->val,ds);
               ds.pop_back();
        }
     
    }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        if(!root)
            return {};
        vector<int>ds;
        dfs(root,t,ds);
        return ans;
    }
};
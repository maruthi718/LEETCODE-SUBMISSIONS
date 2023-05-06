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
    vector<string>ans;
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL)
            return ans;
        dfs(root,"");
        return ans;
    }
    void dfs(TreeNode* root,string path)
    {
       path+=to_string(root->val);
        if(!root->left && !root->right)
        {
            ans.emplace_back(path);
            return;
        }
        if(root->left)
        {
            dfs(root->left,path+"->");
        }
        if(root->right)
        {
            dfs(root->right,path+"->");
        }
    }
};
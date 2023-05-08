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
    int res;
    void check(TreeNode* root,int ans)
    {
        if(!root) return;
        ans=ans*10+root->val;
        if(!root->left && !root->right) 
        {
            res+=ans;
            ans=0;
            return;
        }
        check(root->left,ans);
        check(root->right,ans);
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        check(root,ans);
        return res;
    }
};
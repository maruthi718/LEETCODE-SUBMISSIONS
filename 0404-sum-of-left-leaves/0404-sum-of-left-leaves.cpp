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
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
            return 0;
        check(root,false);
        return sum;
    }
    void check(TreeNode* root,bool temp)
    {
        if(root->right==NULL && root->left==NULL && temp)
        {
            sum+=root->val;
            return;
        }
        if(root->left) 
           check(root->left,true);
        if(root->right)
          check(root->right,false);
    }
};

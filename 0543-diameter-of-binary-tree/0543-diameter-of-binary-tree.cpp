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
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        if(!root) return 0;
        int k=check(root,d);
        return d;
    }
    int check(TreeNode* root,int &d)
    {
        if(!root)
          return 0;
        int l=check(root->left,d);
        int r=check(root->right,d);
        d=max(d,l+r);
        return 1+max(l,r);
    }
};
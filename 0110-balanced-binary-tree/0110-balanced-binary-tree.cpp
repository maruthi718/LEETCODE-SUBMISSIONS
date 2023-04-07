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
    bool isBalanced(TreeNode* root) {
        if(!root) return -1;
        return check(root)!=-1;
    }
    int check(TreeNode* root)
    {
        if(!root) return 0;
        int x=check(root->left);
        if(x==-1) return -1;
        int y=check(root->right);
        if(y==-1) return -1;
        if(abs(x-y)>1) return -1;
        return max(x,y)+1;
    }
};
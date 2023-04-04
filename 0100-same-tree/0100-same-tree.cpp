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
    vector<int>u,v;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((q==NULL && p) || (p==NULL && q))
            return false;
        if(q==NULL && p==NULL) 
        {
            return true;
        }
        if(p->val==q->val)
        {
            return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
        }
      return false;
    }
};
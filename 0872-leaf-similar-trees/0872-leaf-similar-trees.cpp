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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a,b;
        if(root1->left) 
        check(root1->left,a);
        if(root1->right)
        check(root1->right,a);
        if(root2->left) 
        check(root2->left,b);
        if(root2->right) 
        check(root2->right,b);
        if(!root1->right && !root1->left) a.emplace_back(root1->val);
        if(!root2->right && !root2->left) b.emplace_back(root2->val);
        for(auto it:a)cout<<it<<" ";
        cout<<"\n";
        for(auto it:b)cout<<it<<" ";
        return a==b;
    }
    void check(TreeNode *root,vector<int>&v)
    {
         if(!root) return;
        if(!root->left && !root->right)
        {
            v.emplace_back(root->val);
            return;
        }
        if(root->left) 
         check(root->left,v);
        if(root->right) 
         check(root->right,v);
    }
};
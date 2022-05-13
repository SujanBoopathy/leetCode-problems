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
    void implement(TreeNode* root,TreeNode*& res){
        if(root==NULL)
            return ;
        implement(root->left,res);
        res->right=root;
        res=root;
        implement(root->right,res);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* res;
        if(root==NULL)
            return root;
        implement(root,res);
        return res;
    }
};
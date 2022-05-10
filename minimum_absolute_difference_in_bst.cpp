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
    void traverse(TreeNode* root,vector<int>& v){
        if(root==NULL)
            return;
        if(root->left){
            v.push_back(root->val - root->left->val);
        }
        if(root->right){
            v.push_back(root->right->val - root->val);
        }
        traverse(root->left,v);
        traverse(root->right,v);
            
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        traverse(root,v);
        sort(v.begin(),v.end());
        return v[0];
    }
};
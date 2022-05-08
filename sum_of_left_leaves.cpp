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
    void calculate(TreeNode* root,int& sum){
        if(root==NULL)
            return;
        if(root->left && !root->left->left && !root->left->right){
            sum+=root->left->val;
        }        
        calculate(root->left,sum);
        calculate(root->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
            return root->val;
        int sum=0;
        calculate(root,sum);
        return sum;
    }
};
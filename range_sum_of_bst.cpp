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
    void traverse(TreeNode* root,int &sum,int l,int h){
        if(root==NULL)
            return ;
        traverse(root->left,sum,l,h);
        traverse(root->right,sum,l,h);
        if(root->val >= l && root->val <=h)
            sum+=root->val;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)
            return 0;
        int sum=0;
        traverse(root,sum,low,high);
        return sum;
    }
};
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
    void traverse(map<int,int>& m,TreeNode* root){
        if(root==NULL)
            return ;
        m[root->val]++;
        traverse(m,root->left);
        traverse(m,root->right);
    }
    vector<int> findMode(TreeNode* root) {
        map<int,int> mp;
        vector<int> v;
        int m=0,res;
        traverse(mp,root);
        for(auto& a:mp){
            if(m<a.second){
                m=a.second;
            }
        }
        
        return v;
    }
};
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
    TreeNode* insert(vector<int>& v,int s,int e){
        if(s>e){
            return NULL;
        }
        int mid=(s+e)/2;
        TreeNode* root=new TreeNode(v[mid]);
        
        root->left=insert(v,s,mid-1);
        root->right=insert(v,mid+1,e);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)
            return new TreeNode();
        int start=0;
        int end=nums.size()-1;
        return insert(nums,start,end);
    }
};
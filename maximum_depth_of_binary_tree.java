
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int maxDepth(TreeNode root) {
        if(root==null)
            return 0;
        else{
        int ldepth=maxDepth(root.left);
        int rdepth=maxDepth(root.right);
        
        if(ldepth<rdepth){
            return rdepth+1;
        }
        else{
            // return ldepth+1;
        }
        }
    }
}
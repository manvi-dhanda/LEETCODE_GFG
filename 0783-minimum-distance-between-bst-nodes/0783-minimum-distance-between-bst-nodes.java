
class Solution {
    private int absdiff=Integer.MAX_VALUE;
    private Integer prev=null;
    public int minDiffInBST(TreeNode root) {
        
        inorder(root);
        return absdiff;
        }
        private void inorder(TreeNode root)
        {
            if(root==null)return;

            inorder(root.left);
            if(prev!=null)
            {
                absdiff=Math.min(absdiff,Math.abs(prev-root.val));
            }
            prev=root.val;
            inorder(root.right);
        }
}
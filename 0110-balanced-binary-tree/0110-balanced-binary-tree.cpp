
class Solution {
public:
    int helper(TreeNode* root) {
        if(!root) return 0; 
        int lch=helper(root->left);
        if(lch==-1)
        {
            return -1;
        }
        
        int rch=helper(root->right);
        if(rch==-1)
        {
            return -1;
        }
        if(abs(rch-lch)>1) return -1;
        return max(lch,rch)+1;
    }
    bool isBalanced(TreeNode*root){
        return helper(root) !=-1;
    }
};


      



  
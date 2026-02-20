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
    typedef TreeNode* tn;
    int ans;
    int helperDfs(tn nd)
    {
        if(!nd || (!nd->left && !nd->right))
        {
            return 0;
        }
        int leftHt= helperDfs(nd->left);
        int rightHt= helperDfs(nd->right);
        
        int localres= leftHt+ (nd->left !=nullptr);
        localres+= rightHt +(nd->right != nullptr);
        ans=max(ans,localres);
        return max(leftHt,rightHt)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ans=0;
        helperDfs(root);
        return ans;
    }
};
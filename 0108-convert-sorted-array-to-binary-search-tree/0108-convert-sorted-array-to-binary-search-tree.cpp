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
    TreeNode* bsRec(vector<int>& nums, int l ,int r) {
        if(l>r) return nullptr;
        int m= l+((r-l)>>1);
        TreeNode* nd = new TreeNode(nums[m]);
        nd->left=bsRec(nums, l, m-1);
        nd->right=bsRec(nums,m+1,r);
        return nd;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        return bsRec(nums,0,nums.size()-1);
    }
};
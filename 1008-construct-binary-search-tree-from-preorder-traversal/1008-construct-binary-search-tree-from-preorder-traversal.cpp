 class Solution {
public:
    int idx = 0;

    TreeNode* build(vector<int>& preorder, int minVal, int maxVal) {
        if (idx >= preorder.size())
            return nullptr;

        int val = preorder[idx];

        // If current value violates BST property
        if (val < minVal || val > maxVal)
            return nullptr;

        idx++;

        TreeNode* root = new TreeNode(val);

        // Build left subtree (values < root->val)
        root->left = build(preorder, minVal, val);

        // Build right subtree (values > root->val)
        root->right = build(preorder, val, maxVal);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return build(preorder, INT_MIN, INT_MAX);
    }
};
class Solution {
public:
    bool dfs(TreeNode* nd, unordered_set<int>& ust, int k)
    {
        if (!nd) return false;

        if (ust.count(k - nd->val)) 
            return true;

        ust.insert(nd->val);

        return dfs(nd->left, ust, k) || dfs(nd->right, ust, k);
    }

    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> ust;
        return dfs(root, ust, k);
    }
};
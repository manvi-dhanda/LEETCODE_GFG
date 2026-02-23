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
    vector<int>ans;
    
    int dfs(TreeNode* nd, int depth, int maxdepth)
    {
        if(!nd) return maxdepth;
        if(depth>maxdepth)
        {
            maxdepth=depth;
            ans.push_back(nd->val);
        }
        int rightmaxdepth=dfs(nd->right, depth+1,maxdepth);
        maxdepth=max(maxdepth,rightmaxdepth);
        int leftmaxdepth=dfs(nd->left, depth+1,maxdepth);
        maxdepth=max(maxdepth,leftmaxdepth);
        return maxdepth;

    }
    vector<int> rightSideView(TreeNode* root) {
        ans.clear();
        if(!root) return {};
        dfs(root,1,0);
        return ans;
    }
};
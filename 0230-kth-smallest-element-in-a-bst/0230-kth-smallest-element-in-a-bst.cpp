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
    void pushLeftBranch(stack<TreeNode*>& st, TreeNode* nd)
    {
        while(nd)
        {
            st.push(nd);
            nd=nd->left;
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> st;
        pushLeftBranch(st,root);
        while(k--)
        {
            if(k==0)
            {
                return st.top()->val;
            }
            auto nd= st.top();
            st.pop();
            if(nd->right)
            {
                pushLeftBranch(st, nd->right);
            }
        }
        return -1;
    }
};
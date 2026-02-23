/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    vector<int>ans;
    void dfs(Node* nd, int remdist)
    {
        if(!nd || remdist<0) return;
        if(!remdist)
        {
            ans.push_back(nd->data);
            return;
        }
        dfs(nd->left,remdist-1);
        dfs(nd->right,remdist-1);
    }
    vector<int> Kdistance(Node *root, int k) {
       ans.clear();
       dfs(root,k);
       return ans;
    }
};
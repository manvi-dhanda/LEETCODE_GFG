/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  vector<Node*> ans;
  
  void dfs(Node* nd, const int& k)
  {
    if(!nd)
      {
        return;
      }
    if(nd->data < k && (!ans[0] || nd->data > ans[0]->data))
      {
        ans[0]=nd;
      }
    if(nd->data > k && (!ans[1] || ans[1]->data > nd->data))
      {
        ans[1]=nd;
      }
    dfs(nd->left,k);
    dfs(nd->right,k);
  }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        ans={nullptr,nullptr};
        dfs(root,key);
        return ans;
    }
};
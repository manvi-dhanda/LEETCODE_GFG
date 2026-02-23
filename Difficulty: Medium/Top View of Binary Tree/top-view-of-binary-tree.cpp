/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  typedef pair<Node*, int> pni;
    vector<int> topView(Node *root) {
        if(!root) return {};
        queue<pni> q;
        q.push({root,0});
        map<int, int> mp;
        while(!q.empty())
        {
            auto[nd,id]=q.front();
            q.pop();
            if(mp.find(id)==end(mp))
            {
                mp[id]=nd->data;
            }
            if(nd->left)
            {
                q.push({nd->left, id-1});
            }
            if(nd->right)
            {
                q.push({nd->right, id+1});
            }
        }
        vector<int> ans(mp.size());
        int ind=-1;
        
        for(auto& [k,v]: mp)
        {
            ans[++ind]=v;
        }
        return ans;
        
    }
};
class Solution {
  public:
  vector<bool> vis;
  vector<int> ans;
  int n;
  void helperDfs(vector<vector<int>>& g, int nd)
  {
      if(vis[nd]) return ;
      vis[nd]=1;
      ans.push_back(nd);
      for(int& child: g[nd])
      {
          helperDfs(g,child);
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        n=adj.size();
        vis.assign(n,0);
        helperDfs(adj,0);
        return ans;
        
    }
};
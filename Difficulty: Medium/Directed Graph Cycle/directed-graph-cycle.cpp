class Solution {
  public:
    vector<int> vis;
    int n;
    bool cyclic(vector<vector<int>>& g, int nd)
    {
        if(vis[nd]==1)return 1;
        if(vis[nd]==2) return 0;
        vis[nd]=1;
        for(int& child:g[nd])
        {
            if(cyclic(g,child))
            {
                return 1;
            }
        }
        vis[nd]=2;
        return 0;
        }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        n=V;
        vector<vector<int>> g(n);
        for(auto &edge:edges)
        {
            g[edge[0]].push_back(edge[1]);
        }
        vis.assign(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i] && cyclic(g,i))
            {
                return 1;
            }
        }
        return 0;
    }
};
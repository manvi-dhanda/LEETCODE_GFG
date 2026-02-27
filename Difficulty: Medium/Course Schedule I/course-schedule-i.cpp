class Solution {
  public:
    bool canFinish(int n, vector<vector<int>>& edges) {
        vector<vector<int>> g(n);
        vector<int> ind(n);
        for(auto &edge: edges)
        {
            g[edge[1]].push_back(edge[0]);
            ++ind[edge[0]];
        }
        int cnt=0;
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(!ind[i])
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int nd=q.front();
            q.pop();
            ++cnt;
            for(int &child: g[nd])
            
            {
                if(--ind[child]==0)
                {
                    q.push(child);
                }
            }
        }
        return cnt==n;
    }
};
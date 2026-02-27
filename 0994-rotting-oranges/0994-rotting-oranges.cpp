class Solution {
public:

    int orangesRotting(vector<vector<int>>& g) {
        int m=g.size();
        int n=g[0].size();
        int time=-1;
        int ones=0;
        queue<array<int, 2>> q;
        vector<vector<bool>>vis(m,vector<bool>(n));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ones+=g[i][j] ==1;
                if(g[i][j]==2)
                {
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        if(!ones)
        {
            return 0;
        }
        while(!q.empty())
        {
            int sz=q.size();
            ++time;
            for(int i=0;i<sz;i++)
            {
                auto[u,v]=q.front();
                q.pop();
                ones-= g[u][v]==1;
                for(auto [x,y]:vector<array<int,2>>({{-1,0},{1,0},{0,1},{0,-1}}))
                {
                    x+=u;
                    y+=v;
                    if(x>-1 && y>-1 && x<m && y<n&& !vis[x][y] && g[x][y]==1)
                    {
                        q.push({x,y});
                        vis[x][y]=1;
                    }
                }
            }
        }
        return ones? -1: time;
    }
    
};
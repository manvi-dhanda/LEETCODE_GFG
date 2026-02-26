class Solution {
  public:
    int minimumCost(int n, int w, vector<int> &cost) {
        
        const int INF = 1e9;
        vector<int> dp(w + 1, INF);

        dp[0] = 0;   

        for(int weight = 1; weight <= w; weight++) {
            for(int i = 0; i < n; i++) {

                if(cost[i] != -1 && (i + 1) <= weight) {
                    dp[weight] = min(dp[weight],
                                     dp[weight - (i + 1)] + cost[i]);
                }
            }
        }

        return (dp[w] == INF) ? -1 : dp[w];
    }
};
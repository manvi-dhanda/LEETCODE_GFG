class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        
        int n = intervals.size();
        vector<pair<int,int>> starts;  // {start, index}
        
        for(int i = 0; i < n; i++)
            starts.push_back({intervals[i][0], i});
        
        sort(starts.begin(), starts.end());
        
        vector<int> ans(n, -1);
        
        for(int i = 0; i < n; i++) {
            
            int end = intervals[i][1];
            
            int low = 0, high = n - 1;
            
            while(low <= high) {
                
                int mid = (low + high) / 2;
                
                if(starts[mid].first >= end)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            
            if(low < n)
                ans[i] = starts[low].second;
        }
        
        return ans;
    }
};
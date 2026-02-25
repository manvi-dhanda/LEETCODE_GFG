class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int sz=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        unordered_map<int,int> ump;
        for(int& num :nums) ++ump[num];
        for(auto& [key,val]: ump)
        {
            pq.push({val,key});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int> ans(k);
        for(int &num:ans)
        {
            num=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};
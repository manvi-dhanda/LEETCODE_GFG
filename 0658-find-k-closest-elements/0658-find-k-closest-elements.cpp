class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        auto comp= [&x](int& a, int& b){
            return abs(a-x) < abs(b-x) || (abs(a-x)==abs(b-x) && a<b);
        };
        priority_queue<int, vector<int>, decltype(comp)>pq(comp);
        for(int &num:arr)
        {
            pq.push(num);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int>ans(k);
        for(int i=0;i<k;i++)
        {
            ans[i]=pq.top();
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
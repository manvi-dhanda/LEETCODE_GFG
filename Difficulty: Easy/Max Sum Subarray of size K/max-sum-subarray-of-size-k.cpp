class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int sz = arr.size();
        int ans = 0;

        for (int i=0, sum=0; i<sz; ++i) {
            sum += arr[i];
            sum -= ((i-k) > -1) ? arr[i-k] : 0;
            ans = max(ans, sum);
        }

        return ans;
    }
};
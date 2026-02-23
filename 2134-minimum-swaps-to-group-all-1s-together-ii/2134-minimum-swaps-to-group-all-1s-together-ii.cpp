class Solution {
public:
   int minSwaps(vector<int>& nums) {
       int sz = nums.size();
       int tot = accumulate(begin(nums), end(nums), 0);
       int cur_sum = 0;

       for (int i=0; i<tot; ++i) {
           cur_sum += nums[i];
       }
       int ans = tot - cur_sum;

       for (int i=1; i<sz; ++i) {
           int window_end = (i+tot-1) % sz;
           int window_start = (i-1) % sz;

           cur_sum += nums[window_end];
           cur_sum -= nums[window_start];
           ans = min(ans, tot-cur_sum);
       }

       return ans;
    }
};

class Solution {
public:
   int minSubArrayLen(int target, vector<int>& nums) {
       int sz = nums.size();
       int ans = INT_MAX;


       for (int l=0, r=0, sum=0; r<sz; ++r) {
           sum += nums[r];


           while ((l+1) <= r && (sum-nums[l]) >= target) {
               sum -= nums[l];
               ++l;
           }


           if (sum >= target) {
               ans = min(ans, r-l+1);
           }
       }
       return (ans == INT_MAX ? 0 : ans);
   }
};
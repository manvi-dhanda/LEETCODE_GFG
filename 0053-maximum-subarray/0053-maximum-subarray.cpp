class Solution {
public:
   int maxSubArray(vector<int>& nums) {
       int sz = nums.size();
       int ans = INT_MIN;


       for (int i=0, sum=0; i<sz; ++i) {
           sum = nums[i] + max(0, sum);
           ans = max(ans, sum);
       }


       return ans;
   }
};
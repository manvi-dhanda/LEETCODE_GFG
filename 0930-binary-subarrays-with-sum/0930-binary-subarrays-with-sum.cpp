class Solution {
public:
   int sz;


   int getUpto(vector<int>&nums, int goal) {
       int ans = 0;


       for (int l=0, r=0, sum=0; r<sz; ++r) {
           sum += nums[r];


           while (l<r && sum>goal) {
               sum -= nums[l];
               ++l;
           }


           if (sum <= goal) {
               ans += r - l + 1;
           }
       }


       return ans;
   }


   int numSubarraysWithSum(vector<int>& nums, int goal) {
       sz = nums.size();
       int upto_goal = getUpto(nums, goal);
       int upto_goal_1 = getUpto(nums, goal-1);


       return upto_goal - upto_goal_1;
   }
};
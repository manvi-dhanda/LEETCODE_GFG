class Solution {
public:
   void moveZeroes(vector<int>& nums) {
       int sz = nums.size();


       for (int prev = 0, cur = 0; cur < sz; ++cur) {
           if (nums[cur] == 0) {
               continue;
           }


           swap(nums[prev], nums[cur]);
           ++prev;
       }
   }
};
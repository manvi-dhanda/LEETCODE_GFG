class Solution {
public:
   void sortColors(vector<int>& nums) {
       int sz  = nums.size();

       for (int l=0, r=sz-1, m=0; m<=r; ) {
           if (nums[m]==0) {
               swap(nums[m], nums[l]);
               ++l, ++m;
           } else if (nums[m]==1) {
               ++m;
           } else {
               swap(nums[m], nums[r]);
               --r;
           }
       }
   }
};
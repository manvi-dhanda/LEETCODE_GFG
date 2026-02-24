
class Solution {
public:
   int searchAux(vector<int>& nums, int tar, bool findStart=1) {
       int ans = -1;

       for (int l=0, r=nums.size()-1; l<=r; ) {
           int m = l + ((r-l) >> 1);

           if (nums[m] < tar) {
               l = m+1;
           } else if (nums[m] > tar) {
               r = m-1;
           } else {
               ans = m;

               if (findStart) {
                   r = m-1;
               } else {
                   l = m+1;
               }
           }
       }

       return ans;
   }

   vector<int> searchRange(vector<int>& nums, int target) {
       return {searchAux(nums, target, 1), searchAux(nums, target, 0)};
   }
};
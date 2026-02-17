class Solution {
    public int search(int[] nums, int target) {
        int l=0;
        int sz=nums.length;
        int r=sz-1;
        while(l<r)
        {
            int m= l+((r-l)>>1);
            if(nums[m]>nums[r])
            {
                l=m+1;
            }
            else
            {
                r=m;
            }
        }
        if(target<=nums[sz-1])
        {
            r=sz-1;

        }
        else 
        {
            r=l-1;
            l=0;
        }
        while (l <= r) {
            int m = l + ((r - l) >> 1);

            if (nums[m] == target) {
                return m;
            } else if (nums[m] < target) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        return -1;
    }
}
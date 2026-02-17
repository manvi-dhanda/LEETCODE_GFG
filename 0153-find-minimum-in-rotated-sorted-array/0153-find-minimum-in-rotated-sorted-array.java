class Solution {
    public int findMin(int[] nums) {
        int n=nums.length-1;
        int l=0;
        while(l<n)
        {
            int mid= l+(n-l)/2;
            if(nums[mid]>nums[n])
            {
                l=mid+1;
            }
            else
            n=mid;
        }
        return nums[l];
    }
}
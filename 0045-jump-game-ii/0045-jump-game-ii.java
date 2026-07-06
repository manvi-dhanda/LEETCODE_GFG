class Solution {
    public int jump(int[] nums) {
        if(nums.length<=1) return 0;
        int reach=0;
        int minjumps=0;
        int end=0;
        for(int i=0;i<nums.length-1;i++)
        {
            reach= Math.max(reach,i+nums[i]);
            if(i==end)
            {
                minjumps++;
                end=reach;
                if(end>=nums.length -1)
                {
                    break;
                }
            }
        }
       return minjumps;
    }
}
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
         vector< int >index(n);
        for(int i=0;i<n;i++)
        {
                index[(i+k)%n]=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=index[i];
        }

    }
};
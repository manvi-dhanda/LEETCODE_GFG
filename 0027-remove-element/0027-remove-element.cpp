class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // count of elements not equal to val
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // move the non-val element to the front
                k++;
            }
        }
        
        return k; // return count of elements not equal to val
    }
};
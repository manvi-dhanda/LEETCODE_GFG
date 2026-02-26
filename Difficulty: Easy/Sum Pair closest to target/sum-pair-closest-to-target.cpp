class Solution {
public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        
        int n = arr.size();
        if(n < 2) return {};   

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = n - 1;

        int minDiff = INT_MAX;
        vector<int> ans;

        while(left < right) {

            int sum = arr[left] + arr[right];
            int diff = abs(sum - target);

            if(diff < minDiff) {
                minDiff = diff;
                ans = {arr[left], arr[right]};
            }

            if(sum < target)
                left++;
            else
                right--;
        }

        return ans;
    }
};
class Solution {
public:
    bool hasTripletSum(vector<int>& arr, int target) {
        int sz = arr.size();
        sort(arr.begin(), arr.end());

        for (int i = 0; i < sz - 2; i++) {
            int low = i + 1;
            int high = sz - 1;
            int actual_tar = target - arr[i];

            while (low < high) {
                int sum = arr[low] + arr[high];

                if (sum == actual_tar)
                    return true;
                else if (sum < actual_tar)
                    low++;
                else
                    high--;
            }
        }
        return false;
    }
};

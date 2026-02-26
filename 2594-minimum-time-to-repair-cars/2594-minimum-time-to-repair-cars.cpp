class Solution {
public:

    bool canRepair(vector<int>& ranks, int cars, long long time) {
        
        long long totalCars = 0;

        for(int r : ranks) {
            totalCars += sqrt(time / r);

            if(totalCars >= cars)
                return true;
        }

        return false;
    }

    long long repairCars(vector<int>& ranks, int cars) {
        
        long long low = 0;
        long long high = (long long)*max_element(ranks.begin(), ranks.end()) * cars * cars;
        
        long long ans = high;

        while(low <= high) {

            long long mid = low + (high - low) / 2;

            if(canRepair(ranks, cars, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
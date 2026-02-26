class Solution{
public:

    int firstOcc(vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(arr[mid] == x) {
                ans = mid;
                high = mid - 1;
            }
            else if(arr[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return ans;
    }

    int lastOcc(vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(arr[mid] == x) {
                ans = mid;
                low = mid + 1;
            }
            else if(arr[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return ans;
    }

    int countFreq(vector<int>& arr, int x) {

        int first = firstOcc(arr, x);
        if(first == -1) return 0;

        int last = lastOcc(arr, x);
        return last - first + 1;
    }
};
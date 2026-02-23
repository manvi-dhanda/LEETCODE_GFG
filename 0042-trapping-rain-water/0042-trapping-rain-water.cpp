class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        if (n < 3) return 0;

        int l = 0;
        int r = n - 1;
        int lm = 0, rm = 0;
        int res = 0;

        while (l < r) {
            if (h[l] <= h[r]) {
                lm = max(lm, h[l]);
                res += lm - h[l];
                l++;
            } else {
                rm = max(rm, h[r]);
                res += rm - h[r];
                r--;
            }
        }
        return res;
    }
};
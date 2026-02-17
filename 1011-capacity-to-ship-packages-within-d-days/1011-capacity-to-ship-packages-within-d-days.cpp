class Solution {
public:

    int sz;

    bool feasible(vector<int>& w, int days, int mCap)
    {
        int curWt = 0;
        int curDay = 1;

        for (int i = 0; i < sz; i++)
        {
            if (w[i] > mCap) return false;

            if (curWt + w[i] <= mCap)
            {
                curWt += w[i];
            }
            else
            {
                curDay++;
                curWt = w[i];
            }
        }
        return curDay <= days;
    }

    int shipWithinDays(vector<int>& weights, int days)
    {
        sz = weights.size();

        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);
        int ans = -1;

        while (l <= r)
        {
            int m = l + (r - l) / 2;

            if (feasible(weights, days, m))
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return ans;
    }
};

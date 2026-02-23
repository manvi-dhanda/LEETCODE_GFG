
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int tgt) {
        int n = a.size();
        vector<vector<int>> out;
        if (n < 4) return out;

        sort(a.begin(), a.end());

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && a[i] == a[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && a[j] == a[j - 1]) continue;

                long long need = (long long)tgt - a[i] - a[j];
                int l = j + 1, r = n - 1;

                while (l < r) {
                    long long sum2 = (long long)a[l] + a[r];

                    if (sum2 == need) {
                        out.push_back({a[i], a[j], a[l], a[r]});
                        l++;
                        r--;

                        while (l < r && a[l] == a[l - 1]) l++;
                        while (l < r && a[r] == a[r + 1]) r--;
                    }
                    else if (sum2 < need) l++;
                    else r--;
                }
            }
        }
        return out;
    }
};

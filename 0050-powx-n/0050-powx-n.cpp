class Solution {
public:
    double myPow(double x, int n) {

        long long pow = n;
        bool isExp = pow < 0;

        if (pow < 0)
            pow = -pow;

        double ans = 1;
        double base = x;

        while (pow) {
            if (pow & 1) {
                ans *= base;
            }
            base *= base;
            pow >>= 1;
        }

        return isExp ? 1 / ans : ans;
    }
};

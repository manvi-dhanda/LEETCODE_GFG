class Solution {
public:
    string addStrings(string num1, string num2) {

        if (num1.size() < num2.size())
            swap(num1, num2);

        int sza = num1.size();
        int szb = num2.size();

        int i = sza - 1;
        int j = szb - 1;
        int car = 0;

        string ans(sza + 1, '0');
        int k = sza;

        while (i >= 0 || j >= 0 || car) {
            int sum = car;

            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';

            ans[k--] = (sum % 10) + '0';
            car = sum / 10;
        }

        if (ans[0] == '0')
            return ans.substr(1);

        return ans;
    }
};

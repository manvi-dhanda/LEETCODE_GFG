class Solution {
public:
   int maxProfit(vector<int>& prices) {
       int sz = prices.size();
       int mnVal = prices[0];
       int mxProfit = 0;


       for (int i=0; i<sz; ++i) {
           mnVal = min(mnVal, prices[i]);


           int localProfit = prices[i] - mnVal;


           mxProfit = max(mxProfit, localProfit);
       }


       return mxProfit;
   }
};
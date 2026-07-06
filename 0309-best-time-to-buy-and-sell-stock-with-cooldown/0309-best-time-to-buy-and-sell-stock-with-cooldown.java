class Solution {
    public int maxProfit(int[] prices) {
        int buy=-prices[0];
        int sell=0;
        int cool=0;
        for(int i=0;i<prices.length;i++)
        {
            int prev= sell;
            if(buy+prices[i]> sell)
                sell= buy +prices[i];
            if(cool- prices[i]>buy)
            buy=cool-prices[i];
            cool=prev;
        }
        return sell;
    }
}
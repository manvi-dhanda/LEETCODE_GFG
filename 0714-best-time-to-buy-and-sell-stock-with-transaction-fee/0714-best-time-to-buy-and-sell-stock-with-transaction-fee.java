class Solution {
    public int maxProfit(int[] prices, int fee) {
        int hold= -prices[0];
        int free=0;
        for(int i=1;i<prices.length;i++)
        {
            int price=prices[i];
            hold=Math.max(hold,free-price);
            free=Math.max(free,hold+price-fee);
        }
        return free;
    }
}
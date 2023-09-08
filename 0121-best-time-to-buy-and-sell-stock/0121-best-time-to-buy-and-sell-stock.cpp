class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minnum = INT_MAX;
        int total = 0;
        int start = 0;
        int end = 0;

        while(end < prices.size())
        {
            if(prices[end] <= minnum)
            {
                minnum = prices[end];
                start = end;
            }
            if(prices[end] >= total && end > start)
            {
                total = max(total, prices[end] - minnum);
            }
            end++;
        }

        return total;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int output = 0;
        for(int right = 0; right < prices.size(); right++){
            
            if(prices[right] < prices[left]){
                left = right;
                continue;
            }
            int temp = prices[right] - prices[left];
            output = max(output, temp);
        }
        return output;
    }
};
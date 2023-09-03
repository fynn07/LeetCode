class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0;
        int end = 0;
        int min_value = INT_MAX;
        int sum = 0;

        while(end < nums.size())
        {
            sum += nums[end];
            end++;
            while(end > start && sum >= target)
            {
                sum -= nums[start];
                start++;
                min_value = min(min_value, (end-start) + 1);
            }
        }
        if(min_value == INT_MAX){
            return 0;
        }
        return min_value;
    }
};
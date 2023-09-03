class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxs = nums[0];
        int sum = 0;
        int end = 0;

        while(end < nums.size())
        {
          if(sum < 0)
          {
            sum = 0;
          }
          sum += nums[end];
          maxs = max(maxs, sum);
          end++;
        }
        return maxs;  
    }
};
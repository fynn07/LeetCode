class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxim = INT_MIN;
        int curr = 0;

        for(int i = 0; i < nums.size(); i++){
            curr = max(curr, 0);
            curr += nums[i];
            maxim = max(maxim, curr);
        }
        return maxim;
        
    }
};
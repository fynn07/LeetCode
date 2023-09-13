class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max_count = 1;
        int count = 1;
        int size = nums.size() - 1;

        if (nums.size() == 1){return 1;}
        if (nums.size() == 0){return 0;}
        
        for(int i = 0; i < size; i++){
            if((nums[i]) == nums[i+1])
            {
                continue;
            }
            if ((nums[i] + 1) != nums[i+1])
            {
                count = 1;
            }
            else
            {
                count++;
            }
            max_count = max(max_count, count);
        }
        return max_count;
    }
    
};
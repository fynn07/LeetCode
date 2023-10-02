class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++){
            int find = target - nums[i];
            if(map.count(find)){
                output.push_back(map[find]);
                output.push_back(i);
            }
            else{
                map[nums[i]] = i;
            }
        }
        return output;
    }
};
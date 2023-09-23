class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        unordered_map<int, int> hash;

        for(int i = 0; i < nums.size(); i++){
 
            int temp_target = target - nums[i];
            if(hash.count(temp_target) > 0){
                output.push_back(hash[temp_target]);
                output.push_back(i);
            }
            
            hash[nums[i]] = i;
        }
        return output;
    }
};
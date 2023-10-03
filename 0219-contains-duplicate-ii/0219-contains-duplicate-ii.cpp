class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> map;
        int left = 0;

        for(int right = 0; right < nums.size(); right++){
            if(abs(left - right) > k){
                map.erase(nums[left]);
                left++;
            }
            if(map.count(nums[right]) > 0){
                return true;
            }
            map.insert(nums[right]);
        }
        return false;

    }
};
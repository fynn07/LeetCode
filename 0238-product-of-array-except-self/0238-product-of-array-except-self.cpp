class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output = {1};
        int temp = 1;
        for(int i = 0; i < nums.size()-1; i++){
            temp *= nums[i];
            output.push_back(temp);
        }
        temp=1;
        for(int i = nums.size()-1; i >= 0; i--){
            output[i] *= temp;
            temp *= nums[i];
        }
        return output;
    }
};
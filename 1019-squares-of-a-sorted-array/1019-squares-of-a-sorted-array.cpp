class Solution {
public:
    int square(int value){
        int output = value * value;
        return output;
    }

    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++){
            temp.push_back(square(nums[i]));
        }
        sort(temp.begin(), temp.end());
        return temp;
    }
};
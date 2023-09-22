class Solution {
public:
    int square(int value){
        int output = value * value;
        return output;
    }

    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> temp;
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){
            if(abs(nums[left]) > abs(nums[right])){
                temp.push_back(square(nums[left]));
                left++;
            } 
            else{
                temp.push_back(square(nums[right]));           
                right--;
            }
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
};
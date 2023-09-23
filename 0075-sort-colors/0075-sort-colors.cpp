class Solution {
public:
    void sortColors(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;
    int medium = 0;

    while (medium <= high){
        if(nums[medium] == 0){
            int temp = nums[low];
            nums[low] = nums[medium];
            nums[medium] = temp;
            low++;
            medium++;
        }
        else if(nums[medium] == 2){
            int temp = nums[high];
            nums[high] = nums[medium];
            nums[medium] = temp;
            high--;
        }
        else{
            medium++;
        }
    }
    }
};
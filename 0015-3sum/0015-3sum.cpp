class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        set<vector<int>> s; 
    
        int target = 0;
        int a = 0;
        sort(nums.begin(), nums.end());

        while(a != nums.size() - 1){
            int b = a + 1;
            int c = nums.size() - 1;

            while(b < c)
            {
                vector<int> temp;
                int sum = nums[a] + nums[b] + nums[c];
                if (target == sum){
                    temp.push_back(nums[a]);
                    temp.push_back(nums[b]);
                    temp.push_back(nums[c]);
                    s.insert(temp);
                    b++;
                    c--;
                }
                else if(sum > target){
                    c--;
                }
                else{
                    b++;
                }
            }
            a++;
        }
    for(auto triplet: s){
        output.push_back(triplet);
    }
    return output;
    }
};
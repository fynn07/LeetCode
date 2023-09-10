class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        set<vector<int>> s; 
    
        int target = 0;
        int a = 0;
        sort(nums.begin(), nums.end());

        while(a != nums.size() - 2){
            if (nums[a] > 0){
                a++;
                continue;
            }
            int b = a + 1;
            int c = nums.size() - 1;

            while(b < c)
            {
                int sum = nums[a] + nums[b] + nums[c];
                if (target == sum){
                    s.insert({nums[a], nums[b], nums[c]});
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
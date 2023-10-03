class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left = 0;
        int total = 0;
        int output = 0;
        arr.push_back(0);

        for(int right = 0; right < arr.size(); right++){
            if((right - left) + 1 > k){
                if(total / k >= threshold){
                    output++;
                }
                total -= arr[left];
                left++;
            }
            total += arr[right];
        }
        return output;
    }
};
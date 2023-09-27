class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int minimum = right;

        while(left <= right){
            long long count = 0;
            int mid = (left + right) / 2;

            for(int i = 0; i < piles.size(); i++){
                int output = ceil(piles[i] / (double)mid);
                count += output;
            }

            if(count <= h){
                minimum = min(minimum, mid);
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return minimum;
        
    }
};
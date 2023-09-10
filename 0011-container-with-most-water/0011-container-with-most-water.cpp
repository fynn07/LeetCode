class Solution {
public:
    int maxArea(vector<int>& height) {
        int ptr1 = 0;
        int ptr2 = height.size() - 1;
        int maxarea = 0;

        while(ptr1 != ptr2){
            int min = (height[ptr1] >= height[ptr2]) ? 
            (min = height[ptr2]) : (min =  height[ptr1]);
            int dif = ptr2 - ptr1;
            int area = min * dif;
            
            maxarea = max(maxarea, area);
            if(min == height[ptr1]){
                ptr1++;
            }
            else{
                ptr2--;
            }
        }
        return maxarea;
    }
};
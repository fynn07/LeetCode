class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> combined_matrix;
    
        for(int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                combined_matrix.push_back(matrix[i][j]);
            }
        }

        int left = 0;
        int right = combined_matrix.size() - 1;
        
        while(left <= right)
        {
            int mid = (left + right) / 2;
            
            if(combined_matrix[mid] > target)
            {
                right = mid - 1;
            }
            else if(combined_matrix[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                return true;
            }
        }
        return false;
        
    }
};
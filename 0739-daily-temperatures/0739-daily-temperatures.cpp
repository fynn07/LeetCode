class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int temp_size = temperatures.size();
        vector<int> output(temp_size);
        vector<int> stack;
        

        for(int i = temp_size-1; i >= 0; i--){
            if(stack.size() == 0){
                output[i] = 0;
                stack.push_back(i);
            }
            else{
                while(stack.size() != 0){
                    if(temperatures[stack[stack.size()-1]] > temperatures[i])                   {
                        output[i] = stack[stack.size()-1] - i;
                        stack.push_back(i);
                        break;
                    }
                    else{
                        stack.pop_back();
                    }
                }
                if(stack.size() == 0){
                    output[i] = 0;
                    stack.push_back(i);
                }

            }
        }
        return output;
    }
};
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack;
        for (int i = 0; i < tokens.size(); i++){
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int temp = stack.back();
                stack.pop_back();
                 
                if(tokens[i] == "+")
                  stack.back() = stack.back() + temp;
                
                if(tokens[i] == "-") 
                  stack.back() = stack.back() - temp;
                      
                if(tokens[i] == "/")
                  stack.back() = stack.back() / temp;
                      
                if(tokens[i] == "*")  
                  stack.back() = stack.back() * temp;
            }
            else{    
                int n = stoi(tokens[i]);
                stack.push_back(n);
            }
        }
        int output = stack.back();
        return output;
    }
};
class Solution {
public:
    bool isValid(string s) {

        vector<char> stack;
        if (s.size() % 2 == 1 || (s[0] == ')' || s[0] == ']' || s[0] == '}')){
            return false;
        }

        for (int i = 0; i < s.size(); i++){ 
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                stack.push_back(s[i]);
            }
            else{
                if ((s[i] == ')' || s[i] == ']' || s[i] == '}') && stack.size() == 0)
                  return false;
                else{
                    if (s[i] == ')' && stack.back() != '(')
                      return false;
                    else if (s[i] == ']' && stack.back() != '[')
                      return false;
                    else if (s[i] == '}' && stack.back() != '{')
                      return false;
                    stack.pop_back(); 
                }
            }
    
        }
        if (stack.size() != 0)
          return false;
        return true;         

    }
  
};
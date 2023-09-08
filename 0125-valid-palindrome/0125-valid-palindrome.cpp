class Solution {
public:
    bool isPalindrome(string s) {
        string newstring;
        string firststring;
        string secondstring;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for (int i = 0; i < s.size(); i++)
        {
            if(isspace(s[i]) || ispunct(s[i]))
            {
                continue;
            }
            else
            {
                newstring.push_back(s[i]);
            }
        }

        int firstpointer = 0;
        int secondpointer = newstring.size() - 1;

        while(firstpointer < newstring.size())
        {
            firststring.push_back(newstring[firstpointer]);
            secondstring.push_back(newstring[secondpointer]);
            firstpointer++;
            secondpointer--;
        }
  
        if (firststring == secondstring){
            return true;
        }
        return false;
    }

};
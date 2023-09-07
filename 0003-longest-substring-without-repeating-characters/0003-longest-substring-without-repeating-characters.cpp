class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int total = 0;
        int temp = 0;
        int left = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(map.count(s[i]) == 0 || map[s[i]] == 0)
            {
                map[s[i]] = 1;
                temp++;
            }
            else
            {
                temp--;
                map[s[left]]--;
                left++;
                i--;
            }
            total = max(total, temp);
        }
        return total;
    }
};
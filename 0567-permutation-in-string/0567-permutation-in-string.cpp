class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> initial;
        unordered_map<char, int> current;
        int left = 0;
        int size = s1.size();


        for(int i = 0; i < s1.size(); i++)
        {
            initial[s1[i]] += 1;
        }

        for(int right = 0 ; right < s2.size(); right++)
        {
            current[s2[right]] += 1;
            while(((right - left) + 1) > size)
            {
                current[s2[left]]--;
                if(current[s2[left]] == 0)
                {
                    current.erase(s2[left]);
                }
                left++;
            }
            if(initial == current)
            {
                return true;
            }
        }
        return false;
    }
};
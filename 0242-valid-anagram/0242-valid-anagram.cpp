class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> first;
        unordered_map<char, int> second;

        for(int i = 0; i < s.size(); i++){
            first[s[i]]++;
            second[t[i]]++;
        }

        if(first == second) return true;
        else return false;
    }
};
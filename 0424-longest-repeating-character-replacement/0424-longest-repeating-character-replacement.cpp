class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> map;
        using pair_type = decltype(map)::value_type;
        map['@'] = 0;
        int maxval = 0;

        int left = 0;
        
        for(int right = 0; right < s.size(); right++)
        {
            map[s[right]] += 1;
            auto found_max = *max_element(begin(map), end(map), [] (const pair_type & p1, const pair_type & p2) {return p1.second < p2.second;});  

            while((((right - left) + 1) - found_max.second) > k){
            map[s[left]]--;
            left++;
            }
            maxval = max(maxval, right - left + 1);
        }
        return maxval;
                
    }
};
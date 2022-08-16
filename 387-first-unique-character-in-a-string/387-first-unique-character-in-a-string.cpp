class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char, int> uniq_map;        
        
        for (auto& tmp: s)
        {
            ++uniq_map[tmp];
        }
        
        for (int i = 0; i < s.length(); ++i)
        {
            auto node = uniq_map.find(s[i]);
            if (1 == node->second) 
            {
                return i;
            }
        }
        
        return -1;
    }
};
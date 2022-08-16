class Solution {
public:
    int firstUniqChar(string s) {
        int ans = -1;
        unordered_map <char, int> uniq_map;        
        
        for (auto& tmp: s)
        {
            ++uniq_map[tmp];
        }
        for (int i = 0; i < s.length(); ++i)
        {
            auto node = uniq_map.find(s[i]);
            if (uniq_map.end() != node && (node->second == 1)) 
            {
                ans = i;
                break;
            }
        }
        
        return ans;
    }
};
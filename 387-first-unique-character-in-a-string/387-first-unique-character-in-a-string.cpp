class Solution {
public:
    int firstUniqChar(string s) {
        int ans = -1;
        unordered_map <char, int> uniq_map;
        pair<char, int> last_uniq;
        
        /*for (int i = s.length() -1; i >= 0; --i)
        {
            auto node = uniq_map.find(s[i]);
            if (uniq_map.end() == node)
            {
               last_uniq = {s[i], i};
            }
            
            ++uniq_map[s[i]];
        }
        
        auto node = uniq_map.find(last_uniq.first);
        if ( (uniq_map.end() != node) && (node->second == 1))
        {
            ans = last_uniq.second;
        }*/
        
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
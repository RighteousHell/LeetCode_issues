class Solution {
public:
    int firstUniqChar(string s) {
        /*unordered_map <char, int> uniq_map;        
        
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
        
        return -1;*/
        
        vector<int> v(26,0);
		for(char c : s) v[c - 'a']++;
		for(int i = 0; i < s.length(); i++){
			if(v[s[i] - 'a'] == 1) return i;
		}
		return -1;
    }
};
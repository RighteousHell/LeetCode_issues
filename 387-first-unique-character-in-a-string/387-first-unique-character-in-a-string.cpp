class Solution {
public:
    int firstUniqChar(string s) {
        #define CHAR2INT(x) (x-'a')
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
		for(char c : s) v[CHAR2INT(c)]++;
		for(int i = 0; i < s.length(); i++){
			if(v[CHAR2INT(s[i])] == 1) return i;
		}
		return -1;
    }
};
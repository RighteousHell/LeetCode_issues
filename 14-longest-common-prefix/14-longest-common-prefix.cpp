class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        string pattern = strs[0];
        bool flag = true;
        for (int i = 0; i < pattern.length(); ++i)
        {
        
            for (auto&  tmp: strs)
            {
            if (tmp[i] != pattern[i])
                {
                    flag = false;
                }
               
            }
            if (flag)
            {
                ans += pattern[i];
            }
        }
        
        return ans;
        
    }
};
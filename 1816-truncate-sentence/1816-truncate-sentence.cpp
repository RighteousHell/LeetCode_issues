class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int i = 0;
        for (auto& ch: s)
        {
            if (isspace(ch))
            {
                --k;
                if (0 == k)
                {
                   break; 
                }
            }
            ++i;
            
        }
        
        if (k)
        {
           return s;
        }
        else
        {
            return string(s.begin(), s.begin()+i);
        }
        
        return ans;
    }
};
class Solution {
public:
    int maxDepth(string s) {
        int cur_deep = 0;
        int max_deep = 0;
        int ans = 0;
        
        for (auto& ch : s)
        {
            if (ch == '(')
            {
                ++cur_deep;
                 if ( cur_deep > max_deep )
                 {
                ans = max_deep = cur_deep;
                 }
            }
            if (ch == ')')
            {
                --cur_deep;
            }
            
        
            
        }
        return ans;
    }
};
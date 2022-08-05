class Solution {
public:
    int maxDepth(string s) {
        int cur_deep = 0;
        int ans = 0;
        
        for (auto& ch : s)
        {
            if (ch == '(')
            {
                ++cur_deep;
                 if ( cur_deep > ans )
                 {
                ans = cur_deep;
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
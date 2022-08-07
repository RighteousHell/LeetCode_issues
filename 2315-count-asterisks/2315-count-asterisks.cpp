class Solution {
public:
    int countAsterisks(string s) {
        
        int count_bars = 0;
        int ans = 0;
        
        for (auto& ch: s)
        {
            if ('|' == ch)
            {
                ++count_bars;
                if (5 == count_bars)
                {
                    count_bars = 1;
                }
            }
            if (   !((count_bars >= 1 && count_bars < 2) || (count_bars >= 3 && count_bars < 4)  )&& ch == '*') 
            {
                ++ans;
            }
        }
        
        return ans;
        
    }
};
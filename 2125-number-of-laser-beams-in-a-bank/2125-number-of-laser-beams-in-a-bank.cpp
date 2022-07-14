class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int ans_curr = 0;
        int ans_prev = 0;
        for (int i = 0; i < bank.size(); ++i)
        {
            for (auto& tmp: bank[i])
            {
                if (tmp == '1')
                {
                ++ans_curr;
                }
            }
            if (ans_curr)
            {
            ans += ans_curr * ans_prev;
            ans_prev = ans_curr;
            }
            ans_curr = 0;
        }
        
        
        return ans;
    }
};
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        int curr;
        
        for (auto& vec1: accounts )
        {
            for (auto& vec2: vec1)
            {
                curr += vec2;
            }
            
            
            if (max < curr)
            {
                max = curr;
            }
            curr = 0;
        }
    return max;
    }
};
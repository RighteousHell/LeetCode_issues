class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans =0;
        
        for (auto& tmp: patterns)
        {
            if (string::npos != word.find(tmp))
            {
                ++ans;
            }
        }
        
        
        return ans;
    }
};
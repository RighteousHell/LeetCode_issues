class Solution {
public:

    const multimap <string, int> items_specif {{"type", 0},{"color", 1},{"name", 2}};
    
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int ans = 0;
        
        for (auto& tmp: items)
        {
            if (ruleValue == tmp.at(items_specif.find(ruleKey)->second))
            {
                ++ans;
            }
        }
        
        
        return ans;
        
    }
};
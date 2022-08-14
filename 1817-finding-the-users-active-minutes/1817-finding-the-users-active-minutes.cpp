class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        
        vector<int> ans(k);
        unordered_map<int, unordered_set<int>> usermap;
        
        for (auto& line: logs)
        {
            usermap[line[0]].emplace(line[1]);
        }
        
        for (auto& tmp: usermap)
        {
            ans[tmp.second.size() -1]++;
        }
        
        
        
        return ans;
    }
};
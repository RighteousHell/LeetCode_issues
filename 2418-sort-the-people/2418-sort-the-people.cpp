class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        priority_queue <pair<int,int>> new_order;
        vector<string> ans;
        
        for (int i = 0; i < names.size(); ++i)
        {
            new_order.emplace(heights[i], i);
        }
        
        while (!new_order.empty())
        {
            ans.push_back(names[new_order.top().second]);
            new_order.pop();
        }
        
        return ans;
    }
};
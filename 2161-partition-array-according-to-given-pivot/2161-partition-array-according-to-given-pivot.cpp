class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        for (auto& tmp: nums)
        {
            if(tmp < pivot)
            {
                ans.emplace_back(tmp);
            }
        }
                for (auto& tmp: nums)
        {
            if(tmp == pivot)
            {
                ans.emplace_back(tmp);
            }
        }
                for (auto& tmp: nums)
        {
            if(tmp > pivot)
            {
                ans.emplace_back(tmp);
            }
        }
        return ans;
    }
};
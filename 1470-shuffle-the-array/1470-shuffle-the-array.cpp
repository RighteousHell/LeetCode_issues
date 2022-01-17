class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> nnums;
        for (int i =0, j = nums.size()-n; i < n; ++i, ++j)
        {
            nnums.emplace_back(nums.at(i));
            nnums.emplace_back(nums.at(j));
                    }
        return nnums;
        
    }
};
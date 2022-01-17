class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int iters = nums.size();
        for (int i =0; i!= iters; ++i)
        {
            nums.emplace_back(nums.at(i));
        }
        return nums;
    }
};
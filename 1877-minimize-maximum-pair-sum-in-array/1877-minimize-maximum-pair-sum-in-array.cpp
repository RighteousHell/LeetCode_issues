class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        int ans = 0;
        
        for (int i = 0, j = nums.size()-1; i < nums.size()/2; ++i, --j)
        {
            ans = ans <  nums[i] + nums[j]  ? nums[i] + nums[j] :  ans;
        }
        
        return ans;
    }
};
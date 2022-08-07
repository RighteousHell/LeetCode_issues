class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> hash;
        int ans = 0;
        for (int i = 0; i  < nums.size(); ++i)
        {
            hash.emplace(nums[i]);
        }
        
        for (int i = nums.size()-1; i >= 0; --i)
        {
           auto it_j =  hash.find(nums[i] - diff);
            if (it_j != hash.end())
            {
                auto it_i =  hash.find(*it_j - diff);
                    if (it_i != hash.end())
                    {
                        ++ans;
                    }
            }
        }
        
        return ans;
        
    }
};
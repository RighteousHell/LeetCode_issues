class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        
        int ans = 0;
        unordered_map <int, vector<int>> hash;
        
        for (int i = 0; i < nums.size(); ++i)
        {
            
            if (hash.find(nums[i]) != hash.end())
            {
                for (auto& tmp: hash[nums[i]])
                {
                    if ((tmp *i) % k == 0)
                    {
                        ++ans;
                    }
                }
            }
            hash[nums[i]].emplace_back(i);
        }
        
        
        
        

        return ans;
    }
};
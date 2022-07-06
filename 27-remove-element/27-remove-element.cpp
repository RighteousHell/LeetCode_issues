class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans  = nums.size();
        vector<int> tmp_vec;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (val == nums[i])
            {
                --ans;   
            }
            else
            {
                tmp_vec.emplace_back(nums[i]);
            }
            
        }
        
        nums = tmp_vec;
        return ans;
        
    }
};
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       /* int ans  = nums.size();
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
        */
        
        int ans  = nums.size();
        for (int i = nums.size()-1; i >=0 ; --i)
        {
            if (val == nums[i])
            {
                --ans;
                nums.erase(nums.begin() + i);
            }

            
        }
        
        return ans;
    }
};
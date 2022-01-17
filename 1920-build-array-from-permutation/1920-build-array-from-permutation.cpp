class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
                    vector<int> tmp;
            for (int i = 0; i< nums.size(); ++i)
        {
               tmp.emplace_back(nums.at(nums.at(i)));
        }
        return tmp;
        
        
    }
};
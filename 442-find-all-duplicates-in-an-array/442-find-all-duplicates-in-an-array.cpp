class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> answer;
        
        int count  = 0;
        
        
        sort(nums.begin(), nums.end());
        int curr = nums.at(0);
        
        for (auto& tmp: nums)
        {
            cout << tmp << " ";
        }
        for (int i = 1; i < nums.size(); ++i)
        {
              
            if (curr == nums.at(i) )
            {
                ++count;
            }
            if ((curr != nums.at(i)) && (0 < count))
            {
                answer.emplace_back(curr);
                count = 0;
            }
            curr = nums.at(i);
        }
    
        if (0 < count )
            {
                answer.emplace_back(curr);
            }
        
    return answer;    
    }
};
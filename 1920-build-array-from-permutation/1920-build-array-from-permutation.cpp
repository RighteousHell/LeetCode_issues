class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector <int> answer;
        
        
        for ( int i = 0; i < nums.size(); ++i )
        {
            answer.emplace_back(nums.at(nums.at(i)));
        }
     
        return answer;
    }
};
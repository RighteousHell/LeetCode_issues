class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int curr = 0;
        vector<int> answer;
        
        
        for (int& fnum: nums)
        {
            for ( int& snum: nums )
            {
               if ( fnum > snum )
               {
                   ++curr;
               }
            }
            
            answer.emplace_back(curr);
            curr = 0;
        }
        
        return answer;        
    }
};
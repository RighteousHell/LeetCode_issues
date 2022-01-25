class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> answer;
        
        /*for ( int i = 0; i < nums.size(); ++i )
        {
            if ( nums.at(i) > target )
            {
                continue;
            }
            
            auto found = find (nums.begin(), nums.end(), target - nums.at(i));
            if ( nums.end() != found )
            {
                if (found != nums.begin()+i)
                {
                answer.emplace_back(i);
                answer.emplace_back( distance(nums.begin(), found) );
                break;
                }
            }
        }*/
        
        
        
        for ( int i = 0; i < nums.size(); ++i )
        {

            for ( int j = 0; j < nums.size(); ++j )
                
            {
                if ( i == j )
                {
                    continue;
                }
                if ( target ==  nums.at(i) + nums.at(j) )
                {
                    answer.emplace_back(i);
                    answer.emplace_back(j);
                    
                }
            }
            if ( 2 == answer.size() )
            {
                break;
            }
        }
        
        return answer;
        
    }
};
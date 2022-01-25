class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> answer;
        map<int,int> finder;
              
        
        
        /*for ( int i = 0; i < nums.size(); ++i )
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
        }*/
        int tmp = 0;
        finder.insert(pair<int,int>(nums.at(0), 0));
        for ( int i = 1; i < nums.size(); ++i )
        {
            tmp = target - nums.at(i);
         if ( finder.end() != finder.find( tmp ))
         {
             answer.emplace_back(i);
             answer.emplace_back(finder.at(tmp));
             break;

         }
            
            finder.insert(pair<int,int>(nums.at(i), i));
            
            
        }
        return answer;
        
    }
};
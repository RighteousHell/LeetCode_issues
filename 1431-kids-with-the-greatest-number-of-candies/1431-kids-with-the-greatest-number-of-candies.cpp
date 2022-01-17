class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int max = 0;
        vector<bool> answer;
        
        for (auto& tmp: candies)
        {
            if ( max < tmp )
            {
                max = tmp;
            }
        }
        
        for (int i = 0; i < candies.size(); ++i)
        {
            if ( max <= (extraCandies + candies.at(i)))
            {
                answer.emplace_back(true);
            }
            else
            {
                answer.emplace_back(false);
            }
        }
        return answer;
        
    }
};
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        int curr = 0;
        
        for (int i = 0; i < boxes.length(); ++i )
        {
            for (int j = 0; j < boxes.length(); ++j)
            {
                if ( i == j )
                {
                    continue;
                }
                
                if ( '1' == boxes.at(j) )
                {
                    curr += abs( i-j );
                }
            }
            answer.emplace_back(curr);
            curr = 0;
        }
        
        return answer;
        
    }
};
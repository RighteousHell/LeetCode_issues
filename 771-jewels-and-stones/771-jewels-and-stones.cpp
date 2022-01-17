class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int count = 0;
        for ( auto& tmpj: jewels )
        {
            for ( auto& tmps: stones )
            {
                if ( tmpj ==  tmps )
                {
                    ++count;
                }
            }
        
        }
        return count;
    }
};
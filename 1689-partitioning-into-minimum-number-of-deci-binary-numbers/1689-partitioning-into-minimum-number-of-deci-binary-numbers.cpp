#define CHAR_TO_INT(x) (x-48)

class Solution {
public:
    int minPartitions(string n) {
        
        int max = 0;
        int curr = 0;
        
        for (auto& tmp: n)
        {
            curr = CHAR_TO_INT(tmp);
                if ( 9 == curr )
                {
                    return  curr;
                }
            if (max < curr)
            {
                max = curr;
            }
            
        }
        return max;
                
    }
};
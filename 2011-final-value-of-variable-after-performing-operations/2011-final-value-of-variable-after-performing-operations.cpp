class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        for (auto tmp: operations)
        {
            
            if ("++X" == tmp)
            {
              ++res; 
            } else if ("X++" == tmp)
            {
              ++res;  
            } else if ("--X" == tmp)
            {
              --res;  
            } else if ("X--" == tmp)
            {
              --res;  
            }
                   
            
        }
        return res;
    }
};
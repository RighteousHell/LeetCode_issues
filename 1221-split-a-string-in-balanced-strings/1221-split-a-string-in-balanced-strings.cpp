class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int count = 0;
        
       for (auto tmp: s)
       {
           if ('R'== tmp )
           {
               ++count;
           }
           else
           {
               --count;
           }
           
           if ( 0 == count )
           {
               ++ans;
           }
           
       }
            
        return ans;
    }
};
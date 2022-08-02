class Solution {
public:
    int numberOfMatches(int n) {
        
        int ans = 0;
        while (n > 1)
        {
                
            if (0 != n%2)
            {
            n = n/2;
            ans += n;
               ++n; 
            } 
            else{
            n = n/2;
            ans += n;
            }
            
        }
        
        return ans;
        
    }
};
//7 + 4 + 2 +1
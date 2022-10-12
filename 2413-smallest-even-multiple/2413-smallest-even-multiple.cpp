class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        int ans =  (n > 2) ? n : n;
        
        while (!((ans % 2 == 0)  &&  (ans % n == 0)))
        {
            ans += n;
            
        }
        
        return ans;
    }
};
class Solution {
public:
    int minOperations(int n) {
        int ans = 0;
        if (n%2 == 0)
        {
            ans = 1;
            for (int i = 0, step = 3; i < n/2 -1 ; ++i, step +=2)
            {
                ans += step;  
            }
        }
        else 
        {
            for (int i = 0, step = 2; i < n/2; ++i, step +=2)
            {
                ans += step;  
            }  
        }
        
        return ans;
    }
};
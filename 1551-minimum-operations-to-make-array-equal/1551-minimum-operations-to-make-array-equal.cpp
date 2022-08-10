class Solution {
public:
    int minOperations(int n) {
        int ans = 1;
        int step = 3;
        int mid = n/2-1;
        if (n%2 != 0)
        {
            --step;
            --ans;
            ++mid;
        }
            
            for (int i = 0; i < mid; ++i, step +=2)
            {
                ans += step;  
            }  
        
        return ans;
    }
};
class Solution {
    
public:
    
    int xorOperation(int n, int start) {
        const int step = 2;
        int ans = start;
        for (int i = 1; i < n; i++ )
        {
            start += 2;
            ans ^= start;
            
        }
        return ans;
        
    }
};
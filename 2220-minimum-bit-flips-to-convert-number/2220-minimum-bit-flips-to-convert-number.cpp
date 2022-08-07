class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        int xor_num = start xor goal;
           
        int ans = 0;
        
        while (xor_num)
        {
            ans += xor_num & 1;
            xor_num >>= 1;
        }
        
        
        
        return ans;
    }
};
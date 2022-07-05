class Solution {
public:
    /*bool isPalindrome(int x) {
        bool ans  = true;
        vector<int> num;
        
            if (x < 0)
            {
                return false;
            }
        
        while (x > 0)
        {
         num.emplace_back(x%10);
         x /= 10;
        }
        
        for (int i = 0; i < num.size()/2; ++i)
        {

            if (*(num.begin()+i) != *(num.end()-1-i))
            {
                return false;
            }
        }
        
        
        return ans;
        
    }*/

bool isPalindrome(int x) {
        if(x<0 || (x!=0 &&x%10==0)) return false;
    int back_num = 0;
    
    
        while(x > back_num )
        {
            back_num =  back_num * 10 + x % 10;
            x = x/10;
        }
        return (x == back_num) || (x == back_num/10);
    }
    
};

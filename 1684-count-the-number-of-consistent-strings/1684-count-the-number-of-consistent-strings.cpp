class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        
        
        for (auto& tmp: words)
        {
            bool flag = true;
            
            for (auto& ch: tmp)
            {
                if (allowed.find(ch) == string::npos)
                  {
                  flag = false;
                    break;
                  }
                
            }
            
            if (flag)
            {
                ++ans;
            }
        }
        return ans;
        
    }
};
class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans = "";
       
        if (s.empty())
        {
            return ans;
        }
        
        int delim_counter = 0;
        int start_pos = 0;
        
        for (int i = 0; i < s.length(); ++i)
        {
          switch (s[i])
          {
              case '(':
                  {
                      ++delim_counter;
                      break;
                  }
              default: 
                  {
                      --delim_counter;
                  }
          }
            if (delim_counter == 0)
            {
                ans += {s.begin() + start_pos+1, s.begin() +i};
                start_pos = i+1;
            }
        }
        
        return ans;
        
    }
};
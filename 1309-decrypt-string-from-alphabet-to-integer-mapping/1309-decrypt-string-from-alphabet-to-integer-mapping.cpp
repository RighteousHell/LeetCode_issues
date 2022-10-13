class Solution {
public:
    string freqAlphabets(string s) {
        
        string ans;
        
        /*for (int i = s.length()-1; i >= 0; --i)
        {
            if ('#' == s[i])
            {
             auto tmp =  symbols.find({s.begin() + i - 2, s.begin() + i+1});
             ans.push_back(tmp->second);
                i-=2;
             continue;   
            }
            auto tmp =  symbols.find({s[i]});
            ans.push_back(tmp->second);
            
        }
        
        
        reverse(ans.begin(), ans.end());
        */
        
        for (int i = 0; i < s.length();)
        {
            if (i+2 < s.length() && '#' == s[i+2])
            {
                cout << "if" << endl;
             auto tmp =  symbols.find({s.begin() + i, s.begin() + i+3});
             ans += tmp->second;
                i+=3;
             continue;   
            }
            else{
            cout << "else" << endl;
            auto tmp =  symbols.find({s.begin() + i, s.begin() + i+1});
            ans += tmp->second;
        ++i;
            }
            
        }
        return ans;
    }
    unordered_map <string, string> symbols = {{"1", "a"}, {"2", "b"}, {"3", "c"}, {"4", "d"}, {"5", "e"}, {"6", "f"}, {"7", "g"}, {"8", "h"}, {"9", "i"}, {"10#", "j"}, {"11#", "k"}, {"12#", "l"}, {"13#", "m"}, {"14#", "n"}, {"15#", "o"}, {"16#", "p"}, {"17#", "q"}, {"18#", "r"}, {"19#", "s"}, {"20#", "t"}, {"21#", "u"}, {"22#", "v"}, {"23#", "w"}, {"24#", "x"}, {"25#", "y"}, {"26#", "z"}};
};
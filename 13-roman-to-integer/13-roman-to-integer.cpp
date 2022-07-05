class Solution {
public:
    int romanToInt(string s) {
        unordered_map<unsigned char, int> roman_nums = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
                                                        
        int ans = 0;
        int last = 0;    
        for (int i = s.length()-1; i >= 0; --i)
        {
        if (roman_nums.find(s[i])->second < last)
           {
           ans -= roman_nums.find(s[i])->second;
           }
        else 
           {
            ans += roman_nums.find(s[i])->second;
            }
        cout << "letter: " << s[i] << " sum: " << ans << endl;
            last = roman_nums.find(s[i])->second;
         }
        
      return ans;  
    }
};


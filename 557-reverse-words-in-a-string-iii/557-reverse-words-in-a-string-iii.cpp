class Solution {
public:
    string reverseWords(string s) {
        int word_start = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (isspace(s[i]))
            {
                reverse(s, word_start, i-1);
                word_start = i+1;
                
            }
            
           if ( i == s.length() -1 )
           {
               reverse(s, word_start, i);
           }
        }
        
        return s;
    }
    
    void reverse (string& s, int start, int end)
    {
        for (; start <= end; ++start, --end)
        {
            swap(s[start], s[end]);
        }
    }
};
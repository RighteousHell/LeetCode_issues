class Solution {
public:
    void reverseString(vector<char>& s) {
        char* beg = s.data();
        char* end = beg + s.size()-1;
        
        for (int i = 0; i < s.size()/2; ++i )
        {
            swap(*beg, *end);
            ++beg;
            --end;
        }
        
    }
};
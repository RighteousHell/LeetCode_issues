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
        
         /*std::reverse_iterator rev_it = std::make_reverse_iterator(s.end());
        for (int i = 0; i < s.size()/2; ++i, ++rev_it )
        {
            swap(s[i], *rev_it);
        }*/
    }
};
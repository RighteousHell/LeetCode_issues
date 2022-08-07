class Solution {
public:
    string toLowerCase(string s) {
        for (auto& tmp: s)
        {
            tmp = tolower(tmp);
        }
        
        return s;
    }
};
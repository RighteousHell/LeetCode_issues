class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for (auto& tmp: s)
        {
            ans += tolower(tmp);
        }
        
        return ans;
    }
};
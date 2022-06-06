class Solution {
public:
    
vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}
        
    string sortSentence(string s) {
        string delimiter = " ";
        
        vector<string> tokens = split (s, delimiter);
        
sort (tokens.begin(), tokens.end(), [](string s1, string s2) -> bool { return s1.back() < s2.back();});
        
        
        string ans = "";
        for (auto tmp: tokens)
        {
            tmp.pop_back();
            ans += tmp + delimiter;
        }
        ans.pop_back();
    
            return ans;
    }
};
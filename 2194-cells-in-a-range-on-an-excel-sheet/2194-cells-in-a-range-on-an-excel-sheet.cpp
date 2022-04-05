class Solution {
public:
    vector<string> cellsInRange(string s) {
        const std::string delim = ":";
        std::string source_pos, dest_pos;
        

        vector<string> answer;
        for (char i = s[0]; i <= s[3]; ++i)
        {
            std::string tmp = "";
            for (char j = s[1]; j <= s[4]; ++j)
            {
                cout << i << " + " << j;
                answer.emplace_back(tmp + i + j);
            }
        }
        
        
        
        
        
        
        
        return answer;
    }
};
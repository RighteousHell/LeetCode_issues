class Solution {
public:
    vector<string> cellsInRange(string s) {
        const std::string delim = ":";
        std::string source_pos, dest_pos;
        
        source_pos = s.substr(0, s.find(delim));
        dest_pos = s.substr(s.find(delim) + delim.length(), 4);

        vector<string> answer;
        for (char i = source_pos[0]; i <= dest_pos[0]; ++i)
        {
            for (char j = source_pos[1]; j <= dest_pos[1]; ++j)
            {
                cout << i << " + " << j;
                answer.emplace_back(std::string("") + i + j);
            }
        }
        
        
        
        
        
        
        
        return answer;
    }
};
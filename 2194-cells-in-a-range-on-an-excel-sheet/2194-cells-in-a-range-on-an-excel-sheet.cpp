class Solution {
public:
    vector<string> cellsInRange(string s) {
    

        vector<string> answer;
        std::string tmp = "";
        for (char i = s[0]; i <= s[3]; ++i)
        {
            for (char j = s[1]; j <= s[4]; ++j)
            {
                cout << i << " + " << j;
                answer.emplace_back(tmp + i + j);
                
            }
            tmp = "";
        }
        
        
        
        
        
        
        
        return answer;
    }
};
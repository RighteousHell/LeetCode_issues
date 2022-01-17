class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
    int needed_num = 0;
        string answer = "";
        
        for (int j = 0; j < indices.size(); ++j)
        {
            for (int i = 0; i < indices.size(); ++i)
            {
                
            if (j == indices.at(i) )
            {
               answer += s.at(i);
            }
            }
        }
        
        return answer;
        
    }
};
class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> subsituition_table;
        subsituition_table.emplace(' ', ' ');
        
        char curr_letter = 'a';
        for (auto& tmp: key)
        {
            if (' ' == tmp)
            {
                continue;
            }
            auto ht_node = subsituition_table.find(tmp);
            if (ht_node != subsituition_table.end())
            {
                continue;
            }
            else
            {
                subsituition_table.emplace(tmp, curr_letter);
                ++curr_letter;
            }
                  
        }
        
        string ans = "";
        
        for (auto& tmp: message)
        {
            ans+= subsituition_table.find(tmp)->second;
        }
        return ans;
    }
};
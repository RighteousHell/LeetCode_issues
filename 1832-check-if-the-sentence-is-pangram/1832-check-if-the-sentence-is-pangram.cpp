class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        unordered_map<char, bool> abc = {{'a', false},{'b', false},{'c', false},{'d', false},{'e', false},
                                         {'f', false},{'g', false},{'h', false},{'i', false},{'j', false},
                                         {'k', false},{'l', false},{'m', false},{'n', false},{'o', false},
                                         {'p', false},{'q', false},{'r', false},{'s', false},{'t', false},
                                         {'u', false},{'v', false},{'w', false},{'x', false},{'y', false},{'z', false}};
        
        if (26 > sentence.size())
        {
            return false;
        }
        
        for (auto& ch: sentence)
        {
            abc[ch] = true;
        }
    for (auto& tmp: abc)
    {
        if (tmp.second == false)
        {
            return false;
        }
    }
        
        
        return true;
    }
};
    
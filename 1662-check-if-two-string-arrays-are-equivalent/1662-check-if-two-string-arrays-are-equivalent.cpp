class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string wh_word1;
        string wh_word2;
        
        for (auto& tmp: word1)
        {
            wh_word1 += tmp;
        }
            for (auto& tmp: word2)
        {
            wh_word2 += tmp;
        }
        
        return wh_word1 == wh_word2 ? true  : false;
        
    }
};
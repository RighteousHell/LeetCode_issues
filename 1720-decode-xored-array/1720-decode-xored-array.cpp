class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> answer;
        answer.emplace_back(first);
        
        for (int i = 0; i< encoded.size(); ++i)
        {
            answer.emplace_back( encoded.at(i) xor answer.at(i));
        }
        
        return answer;
    }
};
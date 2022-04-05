class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> answer;
        multimap<int,int> ranged_pairs;
        for (int i = 0; i< groupSizes.size(); ++i)
        {
            ranged_pairs.emplace (groupSizes[i], i);
        }

        vector<int> box;
        for (auto tmp =  ranged_pairs.begin(); tmp != ranged_pairs.end(); /*++tmp*/ )
        {
            int curr = tmp->first;
            for (int i = 0; i < curr; ++i)
            {
                box.emplace_back(tmp->second);
                ++tmp;
            }
            answer.emplace_back(box);
            box.clear();
        }
      return answer;  
    }
};
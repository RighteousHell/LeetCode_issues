class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        list<int> p;
        for (int i = 1; i <= m; ++i)
        {
            p.emplace_back(i);
        }
        int poss = 0;
        vector<int> ans;
        int index = 0;
        for(int i = 0; i < queries.size(); ++i)
        {
            
            for (auto j = p.begin(); j !=  p.end(); ++poss)
            {
                if (*j == queries[i])
                {
                    
                    ans.emplace_back(poss);
                    p.emplace_front(*j);
                    p.erase(j);
                    
                    
                    break;
                }
                else 
                {
                    ++j;
                }
                
            }
            poss = 0;
        }
        
        return ans;
    }
};
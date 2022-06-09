class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> nodes;
        
        for (int i = 0; i < 2; ++i)
        {
            auto& tmp_vec = edges[i];
            for (auto& tmp_val: tmp_vec)
            {
                ++nodes[tmp_val];
            }
        }
        map<int, int>::iterator itr ;
        
        for (itr = nodes.begin();
         itr != nodes.end();
         ++itr) {
            if ( itr->second > 1 )
            {
              return  itr->first;  
            }
        
    }
        
        return -1; // never should happens
    }
};
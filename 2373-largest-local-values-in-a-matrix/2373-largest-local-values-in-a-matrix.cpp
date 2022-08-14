class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        vector<vector<int>> ans;
        
        
        for (int i = 1; i+1 < grid.size(); ++i)
        {
            vector<int> tmp_vec;
            for (int j = 1; j+1 < grid[0].size(); ++j)
            {
                int square_max = 0;
                for (int ti = i-1; ti <= i+1; ++ti)
                {
                    for (int tj = j-1; tj <= j+1; ++tj)
                    {
                        square_max = max(square_max, grid[ti][tj]);
                    }
                }
                tmp_vec.emplace_back(square_max);
            }
            ans.emplace_back(tmp_vec);
            
        }
        
        return ans;
    }
};
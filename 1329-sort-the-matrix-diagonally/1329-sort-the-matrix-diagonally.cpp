class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int lines = mat.size();
        int rows = mat[0].size();

        
        for (int p = 0; p < lines + rows; ++p)
        {
          vector<int> tmp_vec;
            
          int pl = p < lines ? p : 0;
          int pr = max(0, p - lines + 1);
            
            for (int i = pl, j = pr; i < lines && j < rows; ++i, ++j )
            {
                tmp_vec.emplace_back(mat[i][j]);
            }
            sort (tmp_vec.begin(), tmp_vec.end());
            for (int i = pl, j = pr, it = 0; it < tmp_vec.size(); ++i, ++j, ++it )
            {
                mat[i][j] = tmp_vec[it];
            }
            
        }
        
        return mat;
        
    }      
       /* 
        dfs (mat, 0, 0);
        
        
        return mat;
       
    }*/
    
    /*void dfs (vector<vector<int>>& mat, int line , int row ) ////// Correct, but slow too :( 
    {
        int lines = mat.size();
        int rows = mat[0].size();
        
        
        if (row +1 < rows -1)
        {
          dfs (mat, line, row + 1);
        }
        
        if (line +1 < lines -1)
        {
          dfs (mat, line + 1, row);
        }
        
        vector<int> tmp_vec;
        int tmp_line = line;
        int tmp_row = row;
        while ( row < rows   && line < lines  )
        {
            tmp_vec.emplace_back(mat[line][row]);
            ++line;
            ++row;
        }
        sort(tmp_vec.begin(), tmp_vec.end());
        for(int i = 0; i < tmp_vec.size(); ++i)
        {
            mat[tmp_line][tmp_row] = tmp_vec[i];
            ++tmp_line;
            ++tmp_row;
        }
        
        
        
    }*/
};
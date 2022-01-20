class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        
        const size_t size = grid.size();

        
        vector<int> max_in_rows (size, 0);
        vector<int> max_in_columns (size, 0);
      

        search_higher_buildings ( grid, max_in_rows,  max_in_columns);
        
        
        
        
        
        
        
        
        
        /*for ( int i = 0; i < grid.size(); ++i)
        {

          cout << " I'm max_in_rows: row [" << i << "] "  << max_in_rows.at(i) <<  endl;
          cout << " I'm max_in_columns[" << i << "] "  << max_in_columns.at(i) <<  endl;

        }*/
        
        
        
        
        
        
        return add_additional_hight ( grid, max_in_rows,  max_in_columns );
        
    }
    
    
    void search_higher_buildings (const vector<vector<int>>& grid, vector<int>& max_in_rows, vector<int>& max_in_columns )
    {
          for ( int i = 0; i < grid.size(); ++i)
        {
            
            for ( int j = 0; j < grid.size(); ++j)
        {
           if ( max_in_columns.at(j) < grid.at(i).at(j)  )
           {
               max_in_columns.at(j) = grid.at(i).at(j);
           }
                
            if ( max_in_rows.at(i) < grid.at(i).at(j)  )
           {
               max_in_rows.at(i) = grid.at(i).at(j);
           }
         }
           
         }
    }
    
        int add_additional_hight (const vector<vector<int>>& grid,  const vector<int>& max_in_rows,  const vector<int>& max_in_columns )
    {
            int sum = 0;
            int higher = 0;
            
          for ( int i = 0; i < grid.size(); ++i)
        {
            
            for ( int j = 0; j < grid.size(); ++j)
        {
                if ( max_in_rows.at(i) > max_in_columns.at(j) )
                {
                    higher = max_in_columns.at(j);
                }
                else 
                {
                     higher = max_in_rows.at(i);
                }

                sum +=    (higher - grid.at(i).at(j));
                
                //cout << " higher " << higher << " - current_ell " << grid.at(i).at(j) << " is " << higher - grid.at(i).at(j) << " : sum = " << sum << endl; 
        }
           
         }
            return sum;
    }
};
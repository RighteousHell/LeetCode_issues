class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int ans = 0;
        for (int li = 0, lj = 0, ri = mat.size()-1, rj = 0; li < mat.size(); ++li, ++lj, --ri, ++rj)
        {
            
            ans += mat[li][lj] + mat[ri][rj];
        }
        
        if ( 0 != mat.size() % 2 )
        {
            ans -= mat[mat.size()/2][mat.size()/2];
        }
        
        return ans;
    }
};
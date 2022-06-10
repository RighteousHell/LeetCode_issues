#define x 0
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> unic_x;
        
        int ans = 0;
        
        for (auto& tmp: points)
        {
            unic_x.emplace_back(tmp[x]);
        }
        sort(unic_x.begin(), unic_x.end());
        
        for (int i = 1;  i < unic_x.size(); ++i )
        { 
            ans = abs( unic_x[i] - unic_x[i-1] ) <= ans ? ans :  abs( unic_x[i] - unic_x[i-1] );
        }
        return ans;
        
    }
};
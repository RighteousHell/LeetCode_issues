const int coordX =0;
const int coordY =1;
const int radius =2;

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        
        vector<int> answer;
        int curr = 0;        
        
        
        for (auto& tmp_c: queries)
        {
            for (auto& tmp_p: points)
            {
                if ( tmp_c.at(radius) >= abs( sqrt( pow( (tmp_c.at(coordX) - tmp_p.at(coordX) ), 2 ) + pow( (tmp_c.at(coordY) - tmp_p.at(coordY) ), 2 )  ) ) )
                {
                    ++curr;
                    /*cout << "i'm circle [" << tmp_c.at(coordX) << " " <<  tmp_c.at(coordY) << " " <<  tmp_c.at(radius) << "] point [" << tmp_p.at(coordX) << " " << tmp_p.at(coordY) << "]" << endl;*/
                }
            }
            answer.emplace_back(curr);
            curr = 0;
            
        }
        return answer;
        
    }
};
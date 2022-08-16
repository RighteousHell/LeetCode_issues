class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for (auto& tmp: image)
        {
            std::reverse(tmp.begin(), tmp.end());
            for (auto& num: tmp)
            {
                num = (! bool(num));
            }
        }
        
        
        return image;
    }
};
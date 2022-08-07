class Solution {
public:
    int countPoints(string rings) {
        struct colors
        {
            bool green = false;
            bool red = false;
            bool blue = false;
        };
        
        int ans = 0;
        
        vector<colors> rods(10);
        
        for (int i = 0; i < rings.size(); i += 2)
        {
            int num_rod = rings[i+1] - '0';
            
            switch (rings[i])
            {
                    case 'R':
                    {
                        rods[num_rod].red = true;
                        break;
                    }
                    case 'B':
                    {
                        rods[num_rod].blue = true;
                        break;
                    }
                    case 'G':
                    {
                        rods[num_rod].green = true;
                        break;
                    }
            }
            
        }
        
        for (auto& tmp: rods)
        {
            if (tmp.red && tmp.blue && tmp.green)
            {
                ++ans;
            }
        }
        
      return ans;  
    }
};
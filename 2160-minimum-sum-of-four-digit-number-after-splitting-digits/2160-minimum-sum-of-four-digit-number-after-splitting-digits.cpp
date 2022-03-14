class Solution {
public:
    int minimumSum(int num) {
        int res = 0;
        vector<int> order;
        
        {
          int devider = 10;
                for (int tmp = num,  tmp_res = 0, i = 0; i < 4; ++i)
        {
            order.emplace_back ( tmp%devider);
  
                    
                    tmp /= devider;
        
    }
        
        }
        
        std::sort (order.begin(), order.end());
        
        res = (order.at(0)*10 + order.at(2))  + (order.at(1)*10 + order.at(3));
        
        return res;
    }

      


};
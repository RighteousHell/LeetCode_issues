class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int ans = 0;
        int curr_cup = capacity;
        for (int i = 0; i < plants.size(); ++i)
        {
         if (curr_cup < plants[i])
         {
             ans += i*2;
             curr_cup = capacity;
         }
            
            curr_cup -=  plants[i];
            ++ans;
        }
        
        
       return ans; 
    }
};
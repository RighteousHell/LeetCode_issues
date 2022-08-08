class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

/*sort(nums.begin(), nums.end());        
        return (nums[nums.size()-1] * nums[nums.size()-2]) - (nums[0] * nums[1]); 
        
        */
        
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        int max1 = 0;
        int max2 = 0;
        
        for (auto& tmp: nums)
        {
            if (tmp > max2)
            {
                max2 = tmp;
                if (tmp > max1)
                {
                    max2 = max1;
                    max1 = tmp;
                }
                
                
            }
            if (tmp < min2)
            {
                min2 = tmp;
                if (tmp < min1)
                {
                    min2 = min1;
                    min1 = tmp;
                }
                
                
            }
            cout << endl << "min1 " << min1 << " min2 " << min2;
        }
        
        cout << max1 << " " << max2 << " " << min1 << " " << min2 << " ";
        return (max1 * max2) - (min1 * min2);
    }
};
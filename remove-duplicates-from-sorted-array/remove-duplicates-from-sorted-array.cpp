
class Solution {
public:
     int removeDuplicates(vector<int>& nums) {
            if(0 ==nums.size())
         {
             return 0;
         }
                     if(1 ==nums.size())
         {
             return 1;
         }
        int curr = nums.at(0);
        int num_counter = 1;

         
        for (int i = 1; i<nums.size(); ++i)
         {
             if (curr != nums.at(i))
             {
            ++num_counter;
            curr = nums.at(i);
             } else
             {
                nums.erase(nums.begin()+i);
                 --i;
             }
         }
return num_counter;
    }
};
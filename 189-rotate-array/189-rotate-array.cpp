class Solution {
public:
    /*void rotate(vector<int>& nums, int k) {
        
            if (nums.size() == 0 || nums.size() == 1 || k==0)
        {
            return;
        }
        int rounds = k/nums.size();
        int reverse = 0;
        if ((k-rounds*nums.size()>nums.size()/2))
        {
            reverse = 1; 
        }
        int shift =  k-(rounds*nums.size())- (reverse*nums.size()/2);
        
        if (reverse)
            {
            if (0 == nums.size()%2)
            {
                int *temp_arr = new int[nums.size()/2];
                memcpy(temp_arr,nums.data()+(nums.size()/2), (nums.size()/2)*sizeof(int) );
                memcpy(nums.data()+(nums.size()/2),nums.data(), (nums.size()/2)*sizeof(int) );
memcpy(nums.data(),temp_arr, (nums.size()/2)*sizeof(int) );  
                delete[] temp_arr;
            }
            else
            {
    int *temp_arr = new int[nums.size()/2+1];   
    int half_vec = nums.size()/2;
    memcpy(temp_arr,nums.data()+half_vec, (half_vec+1)*sizeof(int));
    memcpy(nums.data()+(half_vec+1),nums.data(), (half_vec)*sizeof(int) );
    memcpy(nums.data(),temp_arr, (half_vec+1)*sizeof(int) ); 
    delete[] temp_arr;
            --shift;
            }

            
        }
                 
                

    
        
        
        cout << " rounds is " << rounds << endl;
        cout << " reverse is " << reverse << endl;
        cout << " Shift is " << shift << endl;
        cout << " K " << k << endl;
        cout << " nums.size() " << nums.size();
    
        for (int i =0; i< shift; ++i)
        {
            nums.emplace(nums.begin(),  nums.back());
            nums.pop_back();
        }
        }*/
        
    void rotate(vector<int>& nums, int k) {
        
     if (nums.size() == 0 || nums.size() == 1 || k==0)
        {
            return;
        }
        
        int rounds = k/nums.size();
        int reverse = 0;

            reverse = (k-rounds*nums.size()); 
        
        
        if(reverse>0)
        {
        std::rotate(nums.begin(),nums.begin()+(nums.size()-reverse), nums.end());

        }
    }
};

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        int freq = 0;
        int val = 0;
        vector<int> answer;
        
        for ( int i = 0; i < nums.size(); i+=2 )
        {
            /*if ( nums.at(i)  > nums.at(i+1) )
            {
                val = nums.at(i);
                freq = nums.at(i+1); 
                
            }
            else 
            {
                val = nums.at(i+1);
                freq = nums.at(i);
            }*/
            freq = nums.at(i);
            val = nums.at(i+1);
            
            cout << " freq = " << freq << ";  val = " << val << endl;
            
            
            for (int j = 0; j < freq; ++j)
            {
                answer.emplace_back(val);
            }
    
        } 
        return answer;
        
    }
};
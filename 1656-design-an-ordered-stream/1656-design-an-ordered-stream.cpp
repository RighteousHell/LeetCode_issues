class OrderedStream {
public:
    OrderedStream(int n) {
        
    }
    
        unordered_map<int, string> map;
    int curr_key = 1;

    vector<string> insert(int idKey, string value) {
        

        vector<string> ans;
        
        
        if (curr_key ==idKey )
        {
             ans.emplace_back(value);
             ++curr_key;
        }
        else{
            map.emplace(idKey, value);
        }
        auto tmp_pair = map.find(curr_key);
        do
        {
            auto tmp_pair = map.find(curr_key);
            if ( tmp_pair != map.end())
        {
            ans.emplace_back(tmp_pair->second);
             ++curr_key;      
        }
            else{
                break;
            }
         
        }while (true);
        
        return ans;
    }
      
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
class Solution {
public:
    string defangIPaddr(string address) {
        
        string pattern = "[.]";
        
        
        int size = address.length();
        
        for (int i = 0; i< size ; ++i) 
        {
            if ('.' == address.at(i))
            {
                address.replace(i, 1, pattern);
                i += pattern.length();
                size+= pattern.length()-1;
                
            }
            }
        return address;
    }
};
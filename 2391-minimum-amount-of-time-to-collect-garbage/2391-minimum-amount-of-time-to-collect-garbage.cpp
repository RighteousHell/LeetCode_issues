class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans = 0;
        int lastM = -1;
        int lastG = -1;
        int lastP = -1;
        for (int i = 0; i < garbage.size(); ++i)
        {
            ans += garbage[i].size();
            for (auto ch: garbage[i])
            {
                switch(ch)
                {
                    case 'M':
                        {
                            lastM = i;
                            break;
                        }
                    case 'G':
                        {
                            lastG = i;
                            break;
                        }
                    case 'P':
                        {
                            lastP = i;
                            break;
                        }
                }
            } 
        }
                
        for (int i = 1; i < travel.size(); ++i)
        {
            travel[i] += travel[i - 1];
        }
        
        if (lastM >= 1 && lastM <= travel.size())
        {
            ans += travel[lastM-1];   
        }
        if (lastG >= 1 && lastG <= travel.size())
        {
            ans += travel[lastG-1];   
        }
        if (lastP >= 1 && lastP <= travel.size())
        {
            ans += travel[lastP-1];   
        }
        
    
        return ans;
    }
};

class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        
        vector<int> ans;
        /*
        int start_pos = 0;
        int cur_count = 0;
        
        for (int i = 0; i < s.length(); ++i)
        {
            for (int j = start_pos; i < s.length(); ++j)
            {
                switch(s.at(j))
                {
                    case 'U':
                        {
                            if ( start)
                        }
                    case 'D':
                    case 'L':
                    case 'R':
                    default:
                }
            }
            
            ans.emplace_back(cut_count);
            cur_count = 0;
        }
        
        */
        
        find_steps_num (n, startPos, s, ans, 0);
        return ans;
        
    }
    
    void find_steps_num(int& n, vector<int>& sp, string& s, vector<int>& ans, int cur_pos)
    {
        
        if (cur_pos == s.length())
        {
            return;
        }
        vector<int> startPos = sp;
        int step_counter = 0;
        bool flag = false;
        for (int i = cur_pos; i < s.length(); ++i)
        {
            switch(s[i])
            {
                case 'U':
                    {
                        if (--startPos[0] < 0 )
                        {
                            flag = true;
                        }
                        break;
                    }
                case 'D':
                    {
                        if (++startPos[0] > n-1 )
                        {
                            flag = true;
                        }
                        
                        break;
                    }
                case 'L':
                    {
                        if (--startPos[1] < 0 )
                        {
                           flag = true;
                        }
                        break;
                    }
                    
                case 'R':
                    {
                        if (++startPos[1] > n-1 )
                        {
                            flag = true;
                        }
                        break;
                    }
            }
            if (flag)
            {
                break;
            }
            ++step_counter;
        }
        ans.emplace_back(step_counter);
        find_steps_num (n, sp, s, ans, cur_pos+1);
    }
};
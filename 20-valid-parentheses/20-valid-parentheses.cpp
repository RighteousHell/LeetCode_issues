class Solution {
public:
    bool isValid(string s) {
        
        stack<char> open_brakets;
        
        /*if ((s[0] != '{') || (s[0] != '[') ||  (s[0] !='('))
        {
            cout << "false here!";
         return false;
        }*/
        
        for(char tmp: s)
        {
            if ((tmp == '{') || tmp == '[' ||  tmp =='(')
            {
                open_brakets.emplace(tmp);
                cout << tmp << " ";
            }
            else
            {
                if (open_brakets.empty())
        {
            return false;
        }
                switch(tmp)
                {
                    case '}':
                        {
                            if (open_brakets.top() != '{')
                            {
                                return false;
                            }
                            open_brakets.pop();
                            break;
                        }
                    case ']':
                                                {
                            if (open_brakets.top() != '[')
                            {
                                return false;
                            }
                            open_brakets.pop();
                            break;
                        }
                    case ')':
                                                {
                            if (open_brakets.top() != '(')
                            {
                                return false;
                            }
                            open_brakets.pop();
                            break;
                        }
                }
                
            }
            //cout << "last_open: " << last_open << " tmp: " << tmp << endl;
        }
        if (!open_brakets.empty())
        {
            return false;
        }
        return true;
    }
};
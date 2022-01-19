class Solution {
public:
    string interpret(string command) {
        int i = 0;
        string answer;
        
        while ( i < command.length() )
        {
            if (  ('(' == command.at(i) )  and ( ')' == command.at(i+1) ) )
            {
                answer += 'o';
                i += 2;
            }
            else if ( ('(' == command.at(i) ) )
            {
                answer += "al";
                i += 4;
            }
            else 
            {
                answer += 'G';
                ++i;
            }
        }
        
        return answer;
    }
};
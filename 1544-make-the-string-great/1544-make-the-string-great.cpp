class Solution {
public:
    
    bool isgood(string str)
    {
        for(int i=1;i<str.length();i++)
        {
            if(abs(str[i]-str[i-1]) == 32)
                return false;
        }
        
        return true;
    }
    
    
    string makeGood(string s) {
        
        while(!isgood(s))
        {
            for(int i=1;i<s.length();i++)
            {
                if(abs(s[i] - s[i-1]) == 32)
                {
                    s=s.substr(0,i-1) + s.substr(i+1);
                }
            }
        }
        return s;
    }
};
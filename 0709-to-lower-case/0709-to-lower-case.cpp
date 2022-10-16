class Solution {
public:
    string toLowerCase(string s) {
        
        for(int i=0;i<s.size();i++)
        {
            int num=(int)s[i];
            if(num >=65 && num<=90)
                num+=32;
            s[i]=num;
        }
        
        return s;
    }
};
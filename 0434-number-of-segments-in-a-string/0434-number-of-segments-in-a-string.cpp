class Solution {
public:
    int countSegments(string s) {
        
        int flag=0;
        int count=0;
        for(int i=0;i<=s.length();i++)
        {
            if(s[i] == ' ' || i==s.length())
            {
                if(flag>0)
                    count++;
                    
                flag=0;
            }
            else
                flag++;
               
        }
        return count;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
     
        string str="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i] >= 65 && s[i] <= 90)
                str+= (char) s[i]+32;
            
            if(s[i] >= 97 && s[i] <= 122)
                str+=(char)s[i];    
            
            if(s[i] >= 48 && s[i] <= 57)
                str+=(char)s[i];
        } 
        
        //cout<<str<<endl;
        string rstr=str;
        reverse(rstr.begin(),rstr.end());
        
        if(str==rstr)
            return true;
        else
            return false;
        
        
        
    }
};
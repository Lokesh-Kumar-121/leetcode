class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        int n1=str1.length();
        int n2=str2.length();
        
        int l=__gcd(n1,n2);
        
        string res="";
        
        for(int i=0;i<l;i++)
        {
            if(str1[i] == str2[i])
                res.push_back(str1[i]);
            else
                return "";
        }
        
        string temp=res;
        
        while(temp.length() < str1.length())
        {
            temp+=res;
        }
        
        if(temp!=str1)
            return "";
        
        temp=res;
        while(temp.length() < str2.length())
        {
            temp+=res;
        }
        
        if(temp!=str2)
            return "";
        
        return res;
        
    }
};
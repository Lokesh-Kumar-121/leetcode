class Solution {
public:
    bool isValid(string s) {
        
        string temp;
        for(int i=0;i<s.length();i++)
        {
            temp+=s[i];
            if(temp.length() >= 3)
            {
                int n=temp.length();
                string zz="";
                zz+=temp[n-3];
                zz+=temp[n-2];
                zz+=temp[n-1];
                if(zz=="abc")
                {
                    temp.pop_back();
                    temp.pop_back();
                    temp.pop_back();
                }
                
            }
        }
        if(temp.length()==0)
            return true;
        
        return false;
    }
};
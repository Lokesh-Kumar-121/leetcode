class Solution {
public:
    
    static bool cmp(string s1,string s2)
    {
        return s1.length() < s2.length();
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end(),cmp);
        string res = strs[0];
        
        while(1)
        {
            int flag = 0;
            for(int i=1;i<strs.size();i++)
            {
                if(res != strs[i].substr(0,res.length()))
                {
                    res.pop_back();
                    flag = 1;
                    break;
                }
            }
            
            if(flag == 0 || !res.length())
            {
                return res;
            }
            
        }
        
        return "zz";
        
    }
};
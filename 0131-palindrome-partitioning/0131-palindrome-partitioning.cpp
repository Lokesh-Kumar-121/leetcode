class Solution {
public:
    
    bool check(string s)
    {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[i] != s[j])
                return false;
            i++;j--;
        }
        return true;
    }
    
    void func(int ind,vector<string>&ds,string&s,vector<vector<string>>&res)
    {
        if(ind >= s.length())
        {
            res.push_back(ds);
            return;
        }
        
        for(int i=ind;i<s.length();i++)
        {
            if(check(s.substr(ind,i-ind+1)))
            {
                ds.push_back(s.substr(ind,i-ind+1));
                func(i+1,ds,s,res);
                ds.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>>res;
        vector<string>ds;
        func(0,ds,s,res);
        return res;
    }
};
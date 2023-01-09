class Solution {
public:
    
    void func(int ind,int open,int close,int n,vector<string>&res,string ans)
    {
        if(ind >= 2*n)
        {
            res.push_back(ans);
            return;
        }
        if(open < n)
        {
            ans+="(";
            func(ind+1,open+1,close,n,res,ans);
            ans.pop_back();
        }
        if(close < open)
        {
            ans+=")";
            func(ind+1,open,close+1,n,res,ans);
            ans.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        
        vector<string>res;
        string ans="";
        func(0,0,0,n,res,ans);
        return res;
    }
};
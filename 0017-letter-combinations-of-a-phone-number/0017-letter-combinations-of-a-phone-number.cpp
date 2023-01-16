class Solution {
public:
    
    void func(int ind,string temp,string digits,vector<string>&data,vector<string>&res)
    {
        if(ind >= digits.length())
        {
            if(temp.length() != 0)
             res.push_back(temp);
            return;
        }
        
        string str=data[digits[ind]-'0'];
        for(auto x:str)
        {
            temp+=x;
            func(ind+1,temp,digits,data,res);
            temp.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        
        vector<string>data(10);
        data[2]="abc";
        data[3]="def";
        data[4]="ghi";
        data[5]="jkl";
        data[6]="mno";
        data[7]="pqrs";
        data[8]="tuv";
        data[9]="wxyz";
        
        vector<string>res;
        string temp;
        func(0,temp,digits,data,res);
        return res;
        
        
    }
};
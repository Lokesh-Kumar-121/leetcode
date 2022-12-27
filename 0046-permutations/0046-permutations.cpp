class Solution {
public:
    
    void func(int ind,vector<int>&ds,unordered_map<int,int>&m,vector<vector<int>>&res)
    {
        if(ind == m.size())
        {
            res.push_back(ds);
            return;
        }
        
        for(auto x:m)
        {
            if(x.second == 0)
            {
                ds.push_back(x.first);
                m[x.first]=1;
                func(ind+1,ds,m,res);
                ds.pop_back();
                m[x.first]=0;
                
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>res;
        vector<int>ds;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=0;
        }
        
        func(0,ds,m,res);
        return res;
        
    }
};
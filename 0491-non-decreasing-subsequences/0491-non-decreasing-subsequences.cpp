class Solution {
public:
    
    struct hashFunction 
{
  size_t operator()(const vector<int> 
                    &myVector) const 
  {
    std::hash<int> hasher;
    size_t answer = 0;
      
    for (int i : myVector) 
    {
      answer ^= hasher(i) + 0x9e3779b9 + 
                (answer << 6) + (answer >> 2);
    }
    return answer;
  }
};
    
    void func(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&res)
    {
        if(ind>=nums.size())
        {
            if(ds.size() >= 2)
            {
                res.push_back(ds);
            }
            return;
        }
        // for(int i=ind;i<nums.size();i++)
        // {
            
        if(ds.size() == 0)
        {
            ds.push_back(nums[ind]);
            func(ind+1,nums,ds,res);
            ds.pop_back();
        }
        else
        {
            if(nums[ind] - ds.back() >= 0)
            {
                ds.push_back(nums[ind]);
                func(ind+1,nums,ds,res);
                ds.pop_back();
            }
        }
        
        func(ind+1,nums,ds,res);
        // }
        
        
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ds;
        func(0,nums,ds,res);
        unordered_set<vector<int>,hashFunction>sett;
        for(int i=0;i<res.size();i++)
        {
            sett.insert(res[i]);
        }
        
        res.clear();
        for(auto x:sett)
        {
            res.push_back(x);
        }
        return res;
    }
};
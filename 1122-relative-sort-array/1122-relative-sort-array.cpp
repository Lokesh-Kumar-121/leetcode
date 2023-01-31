class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int>res;
        map<int,int>mapp;
        for(auto x:arr1)
            mapp[x]++;
        
        for(auto x:arr2)
        {
            if(mapp.find(x) != mapp.end())
            {
                for(int i=0;i < mapp[x];i++)
                    res.push_back(x);
                
                mapp.erase(x);
            }
        }
        
        for(auto x:mapp)
        {
            for(int i=0;i<x.second;i++)
                res.push_back(x.first);
            
        }
        
        return res;
    }
};
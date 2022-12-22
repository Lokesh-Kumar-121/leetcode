class Solution {
public:
    vector<vector<int>>res;
    
    void func(int ind,vector<int>&arr,int target,vector<int>c)
    {
        if(ind >= c.size()){
            if(target == 0){
            res.push_back(arr);
            }
            return;
        }
        if(target >= c[ind])
        {
        
        arr.push_back(c[ind]);
        func(ind,arr,target-c[ind],c);
        arr.pop_back();
        }
        func(ind+1,arr,target,c);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>arr;
        func(0,arr,target,candidates);
        return res;
        
    }
};
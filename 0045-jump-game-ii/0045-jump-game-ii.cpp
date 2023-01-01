class Solution {
public:
    
    int func(int ind,vector<int>&nums,vector<int>&dp)
    {
        if(ind >= nums.size()-1)
            return 0;
        
        // if(nums[ind] == 0)
        //     return 0;
        if(dp[ind] != -1)
            return dp[ind];
        
        int mn=10e6;
        //int flag=0;
        for(int i=1;i<=nums[ind];i++)
        {
            // int ans=1+func(ind+i,nums);
            // mn=min(mn,ans);
            mn=min(mn,1+func(ind+i,nums,dp));
            //flag=1;
        }
        return dp[ind]=mn;
    }
    
    int jump(vector<int>& nums) {
        if(nums.size() == 1)
            return 0;
        if(nums[0] == 0)
            return -1;
        
        vector<int>dp(nums.size(),-1);
        return func(0,nums,dp);
    }
};
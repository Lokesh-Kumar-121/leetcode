class Solution {
public:
    
    int func(int ind,vector<int>& nums,int mn,vector<vector<int>>&dp)
    {
        if(ind>=nums.size())
            return 0;
        
        if(dp[ind][mn+1] != -1)
            return dp[ind][mn+1];
        
        int left=INT_MIN;
        if(mn == -1 || nums[ind] > nums[mn])
        {
            left=1+func(ind+1,nums,ind,dp);
        }
        int right=0+func(ind+1,nums,mn,dp);
        
        return dp[ind][mn+1]=max(left,right);
    }
    
    int lengthOfLIS(vector<int>& nums) {
       
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return func(0,nums,-1,dp);
        
    }
};
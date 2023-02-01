class Solution {
public:
    
//     int func(int ind,vector<int>& nums,int mn,vector<vector<int>>&dp)
//     {
//         if(ind>=nums.size())
//             return 0;
        
//         if(dp[ind][mn+1] != -1)
//             return dp[ind][mn+1];
        
//         int left=INT_MIN;
//         if(mn == -1 || nums[ind] > nums[mn])
//         {
//             left=1+func(ind+1,nums,ind,dp);
//         }
//         int right=0+func(ind+1,nums,mn,dp);
        
//         return dp[ind][mn+1]=max(left,right);
//     }
    
    int lengthOfLIS(vector<int>& nums) {
       
        // vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        // return func(0,nums,-1,dp);
        
        int n=nums.size();
        vector<int>arr(n,1);
        int mx=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j] < nums[i])
                {
                    arr[i] = max(arr[i],arr[j] + 1);
                }
            }
            
            mx=max(mx,arr[i]);
        }
        
        return mx;
        
    }
};
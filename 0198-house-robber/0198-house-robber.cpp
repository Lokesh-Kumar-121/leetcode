class Solution {
public:
    int dp[405];
    int solve(vector<int>&arr,int i){
        if(i>arr.size()-1)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
            dp[i]=max(arr[i]+solve(arr,i+2),solve(arr,i+1));
        
        return dp[i];
    }
    int rob(vector<int>& nums) {
//         int sum1=0,sum2=0;
//         for(int i=0;i<nums.size();i+=2){
//             sum1+=nums[i];
//         }
//         for(int i=1;i<nums.size();i+=2)
//             sum2+=nums[i];
        
//         return max(sum1,sum2);
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);
    }
};
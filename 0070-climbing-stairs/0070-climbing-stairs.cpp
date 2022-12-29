class Solution {
public:
    
    int func(int n,vector<int>&dp)
    {
        if(n<=1)
            return 1;
        if(dp[n] != -1)
            return dp[n];
        
        return dp[n] = func(n-1,dp)+func(n-2,dp);
    }
    
    int climbStairs(int n) {
        
//         int x=1,y=1;
//         if(n==1)
//             return 1;
        
//         int total;
//         for(int i=1;i<n;i++)
//         {
//             total=x+y;
//             x=y;y=total;
//         }
        
//         return total;
        
        vector<int>dp(n+1,-1);
        return func(n,dp);
            
    }
};
class Solution {
public:
    
    int func(int row,int col,int m,int n,vector<vector<int>>&dp)
    {
        if(row == m-1 && col == n-1)
            return 1;
         // if(row==0 and col ==0) return 1;
        if(row>m-1 or col >n-1) return 0;
        
        if(dp[row][col] != -1)
            return dp[row][col];
        
       //  int left=0,right=0;
       // // if(row < m)
       // // {
       //      left+=func(row+1,col,m,n,dp);
       // //}
       // // if(col < n)
       // //{
       //     right+=func(row,col+1,m,n,dp);
       // //}
        
        return dp[row][col]=func(row+1,col,m,n,dp)+func(row,col+1,m,n,dp);
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return func(0,0,m,n,dp);
    }
};
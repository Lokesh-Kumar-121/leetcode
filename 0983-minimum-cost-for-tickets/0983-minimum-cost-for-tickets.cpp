class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n+1, 0);
        dp[0]=0;
        for(int i=1; i<n+1; i++){
            //compute dp[i] for i-1 day
            dp[i]=dp[i-1]+costs[0];
            int j=i;
            while(j>0 && days[j-1]>=days[i-1]-6){
                j--;
            }
            dp[i]=min(dp[i],dp[j]+costs[1]);
            while(j>0 && days[j-1]>=days[i-1]-29){
                j--;
            }
            dp[i]=min(dp[i],dp[j]+costs[2]);   
        }
        return dp[n];  
    }
};
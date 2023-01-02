//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    long long int func(int ind,int sum,int coins[],int n,vector<vector<long long int>>&dp)
    {
        if(ind>=n)
        {
            if(sum==0)
            {
                return 1;
            }
            return 0;
        }
        if(dp[ind][sum] != -1)
            return dp[ind][sum];
        long long int left=0,right=0;
        
        if(coins[ind] <= sum){
            //sum=sum-coins[ind];
            left+=func(ind,sum-coins[ind],coins,n,dp);
            //sum+=coins[ind]; 
            
        }
        right+=func(ind+1,sum,coins,n,dp);
        
        return dp[ind][sum]=left+right;
        
    }
  
    long long int count(int coins[], int N, int sum) {

        // code here.
        vector<vector<long long int>>dp(N,vector<long long int>(sum+1,-1));
        return func(0,sum,coins,N,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends
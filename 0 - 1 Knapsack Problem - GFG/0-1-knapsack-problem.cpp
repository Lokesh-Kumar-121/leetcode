//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int func(int ind,int w,int val[],int wt[],int n,vector<vector<int>>&dp)
    {
        if(ind>=n)
        {
            //res.push_back(ans);
            return 0;
        }
        if(dp[ind][w] != -1)
            return dp[ind][w];
            
        
        int left=INT_MIN;
        if(w>=wt[ind])
            left=val[ind]+func(ind+1,w-wt[ind],val,wt,n,dp);
        int right=func(ind+1,w,val,wt,n,dp);
        
        return dp[ind][w]=max(left,right);
        //return max(val[ind]+func(ind+1,w-wt[ind],val,wt,n),func(ind+1,w,val,wt,n));
        
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
    //   vector<int>res;
      int sum=accumulate(val,val+n,0ll);
      vector<vector<int>>dp(n,vector<int>(sum,-1));
      return func(0,W,val,wt,n,dp);
       //return *max_element(res.begin(),res.end());
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
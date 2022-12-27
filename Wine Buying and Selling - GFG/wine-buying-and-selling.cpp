//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  long long int wineSelling(vector<int>& arr, int n){
      //Code here.
      int flag=0;
      for(int i=0;i<n;i++)
      {
          if(arr[i] != 0)
            flag=1;
      }
      if(flag==0)
        return 0;
    
      int buy,sell;
      for(int i=0;i<n;i++)
      {
          if(arr[i] > 0)
          {
              buy=i;
              break;
          }
      }
      for(int i=0;i<n;i++)
      {
          if(arr[i] < 0)
          {
              sell=i;
              break;
          }
      }
      //cout<<buy<<" "<<sell<<endl;
      long long int res=0;
      while(buy < n)
      {
          if(arr[buy] > abs(arr[sell]))
          {
              arr[buy]=arr[buy]+arr[sell];
              res+=(abs((sell-buy))*(abs(arr[sell])));
              arr[sell]=0;
              
              while(sell<n && arr[sell] >= 0)
              {
                  sell++;
              }
          }
          else if(arr[buy] == abs(arr[sell]))
          {
              res+=abs(sell-buy)*arr[buy];
              arr[buy]=0;
              arr[sell]=0;
              while(sell<n && arr[sell] >= 0)
              {
                  sell++;
              }
              while(buy<n && arr[buy] <= 0)
              {
                  buy++;
              }
          }
          else
          {
              arr[sell]=arr[sell]+arr[buy];
              res+=(abs((sell-buy))*(arr[buy]));
              arr[buy]=0;
              
              while(buy<n && arr[buy] <= 0)
              {
                  buy++;
              }
          }
      }
      return res;
      
  }
};



//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        long long int ans = ob.wineSelling(arr,n);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends
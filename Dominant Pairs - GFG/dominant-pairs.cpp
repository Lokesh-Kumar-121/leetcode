//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        sort(arr.begin(),arr.begin()+n/2);
        sort(arr.begin()+n/2,arr.end());
        
        // for(auto x:arr)
        // cout<<x<<" ";
        // cout<<endl;
        // int cnt = 0;
        // for(int i = n/2 ; i < n ; i ++ ){
        //     if(arr[i] == 0) cnt++;
       // }
        int count=0;
        for(int i=0;i<n/2;i++)
        {
            
            // for(int j=n-1;j>=n/2;j--)
            // {
            //     if(arr[i] >= 5*arr[j])
            //     {
            //         count+= j-n/2;
            //         count++;
            //         break;
            //     }
            // }
            
            int left = n/2;
            int right = n-1;
            // int mid;
            while(left<=right)
            {
              int mid = left + (right-left)/2;
               
              if(arr[i] < 5*arr[mid])
              {
                  right = mid-1;
              }
              else
              {
                  if(mid == n-1 || arr[i] < 5*arr[mid+1])
                  {
                      count+=mid - n/2;
                      count++;
                      break;
                  }
                  left = mid+1;
              }
            }
        }
            
        //     int need = arr[i]/5;
        //     if(need == 0){
        //         if(arr[i] <= 0){
        //             need = -1;
        //         }
        //     }
        //     auto it = upper_bound(begin(arr)+n/2,end(arr),need) - (arr.begin()+n/2);
        //   // cout << it <<" ";
        //     count += (it);
        // }
        
        
        // int count=0;
        // int i=n/2 - 1;
        // int j = n-1;
        
        // while(i>=0)
        // {
        //     while(j>=n/2 && arr[i] > 5*arr[j])
        //     {
        //         j--;
        //     }
        //     count=j-n/2;
        //     i--;
        // }
        return count;
        
    }  
};

// 8
// -2 0 -3 -10 3 -3 -2 -2
// 2 8 10 1 1 2
//     i  j
// 2 8 10 1 1 2

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
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends
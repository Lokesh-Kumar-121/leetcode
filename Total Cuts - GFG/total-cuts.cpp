//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        vector<pair<int,int>>pre(N);
        pre[0].first = A[0];
        int lar = A[0];
        for(int i=1;i<N;i++)
        {
            if(A[i] > lar)
            {
                lar = A[i];
            }
            pre[i].first = lar;
        }
        
        pre[N-1].second = 0;
        int small = INT_MAX;
        
        for(int i=N-2;i>=0;i--)
        {
            if(A[i+1] < small)
            {
                small = A[i+1];
            }
            
            pre[i].second = small;
        }
        
        // for(auto x:pre)
        //     cout<<x.first<<" "<<x.second<<endl;
        
        int count=0;
        for(int i=0;i<N-1;i++)
        {
            if(pre[i].first + pre[i].second >= K)
                count++;
        }
        
        
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int n, string s, int x){
        // code here
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                arr.push_back({i-x,i+x});
            }
        }
        
        int k=0;
        for(int i=0;i<arr.size();i++)
        {
            int left = arr[i].first;
            int right = arr[i].second;
            
            k = left;
            if(k<0)
                k=0;
            
            
            while(k<=right)
            {
                if(s[k] == '0')
                    s[k] = '1';
                k++;
            }
        }
        
        
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')
                return false;
        }
        
        return true;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends
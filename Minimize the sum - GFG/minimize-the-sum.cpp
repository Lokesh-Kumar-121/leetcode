//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimizeSum(int n, vector<int> arr) {
        // code here
        priority_queue<int,vector<int>,greater<>>q;
        for(int i=0;i<n;i++)
        {
            q.push(arr[i]);
        }
        
        int sum=0;
        while(!q.empty())
        {
            int num1=0,num2=0;
            if(!q.empty()){
            num1=q.top();
            q.pop();
            }
            else
                break;
            if(!q.empty()){
            num2=q.top();
            q.pop();
            }
            else
                break;
            sum+=num1+num2;
            q.push(num1+num2);
        }
        
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends
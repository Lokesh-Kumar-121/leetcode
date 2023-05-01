//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    
    bool check(long long mid, vector<int>&arr,int k)
    {
        k = k+1;
        long long sum = 0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum >= mid)
            {
                k--;
                if(k == 0)
                    return true;
                sum = 0;
            }
        }
        
        return false;
    }
    
    int maxSweetness(vector<int>& arr, int n, int k) {
        // Write your code here.
        long long left = *min_element(arr.begin(),arr.end());
        long long right = accumulate(arr.begin(),arr.end(),0ll);
        // cout<<left<<" "<<right<<endl;
        
        while(left <= right)
        {
            long long mid = left + (right - left)/2;
            // cout<<"#"<<mid<<endl;
            if(!check(mid,arr,k))
            {
                // left = mid+1;
                right = mid-1;
            }
            else
            {
                if(!check(mid+1,arr,k))
                {
                    return mid;
                }
                
                // right = mid-1;
                left = mid+1;
            }
        }
        
        return -1;
    
    }
};

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends
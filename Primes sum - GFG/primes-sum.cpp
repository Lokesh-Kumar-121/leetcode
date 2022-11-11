//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:

bool isPrime(int n)
{
    // Check if n=1 or n=0
    if (n <= 1)
        return false;
    // Check if n=2 or n=3
    if (n == 2 || n == 3)
        return true;
    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}


    string isSumOfTwo(int N){
        // code here
        vector<int>arr;
        for(int i=2;i<N;i++)
        {
            if(isPrime(i))
                arr.push_back(i);
        }
        
        // for(auto x:arr)
        //     cout<<x<<" ";
            
        // cout<<endl;
        
        int i=0,j=arr.size()-1;
        
        while(i <= j)
        {
            if(arr[i] + arr[j] == N)
                return "Yes";
                
            else if(arr[i] + arr[j] > N)
                j--;
                
            else
                i++;
        }
        
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends
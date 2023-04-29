//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
        
        if(n > m)
        return false;
        
        if(m == 1 && n == 1 & seats[0] == 0)
            return true;
            
        // for(int i=1;i<m;i++)
        // {
        //     if(seats[i] == 1 && seats[i-1] == 1)
        //         return false;
        // }
        
        for(int i=0;i<m;i++)
        {
            if(i == 0 && seats[i] == 0 && seats[i+1] == 0)
            {
                seats[i] = 2;
                n--;
                if(n<=0)
                {
                    return true;
                }
                continue;
            }
            
            if(seats[i] == 0 && seats[i-1] == 0 && seats[i+1] == 0)
            {
                seats[i] = 2;
                n--;
                if(n<=0)
                {
                    return true;
                }
            }
            
            if(i == m-1 && seats[i] == 0 && seats[i-1] == 0)
            {
                seats[i] = 2;
                n--;
                if(n<=0)
                {
                    return true;
                }
                continue;
            }
            
        }
        
        // for(auto x:seats)
        //     cout<<x<<" ";
        // cout<<endl;
        // cout<<n<<endl;
        
        if(n<=0)
            return true;
        return false;
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends
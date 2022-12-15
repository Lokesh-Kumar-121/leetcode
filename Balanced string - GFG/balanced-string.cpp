//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
  
 string even(int N)
 {
     
            string res="";
            int c=97;
            for(int i=0;i<N/2;i++)
            {
                res+=(char)c;
                c++;
            }
            c=122;
            string temp="";
            for(int i=N/2;i<N;i++)
            {
                temp+=(char)c;
                c--;
            }
            reverse(temp.begin(),temp.end());
            res+=temp;
            return res;
     
 }
 
 int calsum(int n)
 {
     int sum=0;
     while(n>0)
     {
         sum+=n%10;
         n/=10;
     }
     return sum;
 }
 
    string BalancedString(int N) {
        // code here
        string res="";
        
        if(!(N&1))
        {
            int l=N/26;
            int r=N%26;
            for(int i=0;i<l;i++)
                res+=even(26);
            res+=even(r);
        }
        else
        {
            int l=N/26;
            int r=N%26;
            for(int i=0;i<l;i++)
                res+=even(26);
            int sum=calsum(N);
            if(sum&1)
            {
                int c=97;
                for(int i=0;i<(r-1)/2;i++)
                {
                    res+=(char)c;
                    c++;
                }
                c=122;
                string temp="";
                for(int i=(r-1)/2;i<r;i++)
                {
                    temp+=(char)c;
                    c--;
                }
                reverse(temp.begin(),temp.end());
                res+=temp;
                
            }
            else
            {
                int c=97;
                for(int i=0;i<(r+1)/2;i++)
                {
                    res+=(char)c;
                    c++;
                }
                c=122;
                string temp="";
                for(int i=(r+1)/2;i<r;i++)
                {
                    temp+=(char)c;
                    c--;
                }
                reverse(temp.begin(),temp.end());
                res+=temp;
            }
        }
        return res;
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
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends
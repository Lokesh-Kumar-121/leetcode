//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    bool help(string& str)
    {
        int i=0,j=str.length()-1;
        
        while(i<j)
        {
            if(str[i] == '?' && str[j] == '?')
            {
                i++;j--;
                continue;
            }
            
            if(str[i] != '?' && str[j] != '?')
            {
                // return false;
                if(str[i] == str[j])
                {
                    i++;j--;
                    continue;
                }
                else
                    return false;
            }
            
            if(str[i] != '?' && str[j] == '?')
            {
                str[j] = str[i];
                i++;j--;
            }
            if(str[i] == '?' && str[j] != '?')
            {
                str[i] = str[j];
                i++;j--;
            }
            
            
        }
        
        return true;
        
    }
  
    int minimumSum(string s) {
        // code here
        
        if(!help(s))
        {
            return -1;
        }
        
        // for(auto x:s)
        //     cout<<x;
        // cout<<endl;
        int count=0;
        int ch,ind;
        int flag = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] != '?')
            {
                ch = s[i];
                flag = 1;
                ind = i;
                break;
            }
        }
        
        // cout<<(char)ch<<" "<<ind<<endl;
        
        if(flag == 0)
            return 0;
        
        for(int i=ind+1;i<s.length();i++)
        {
            if(s[i] == '?')
                continue;
            else
            {
                count+= abs(ch - (int)s[i]);
                ch = s[i];
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
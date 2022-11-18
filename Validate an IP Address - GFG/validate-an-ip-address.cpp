//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            
            int n=s.length();
            
            for(int i=1;i<n;i++)
            {
                if(s[i] == '.' && s[i]==s[i-1])
                    return 0;
            }
            
            for(int i=0;i<n;i++)
            {
                if((int)s[i] <46 || (int)s[i] >57)
                    return 0;
            }
            
            int count=0;
            string temp="";
            for(int i=0;i<=n;i++)
            {
                if(s[i] == '.' || i==n)
                {
                    if(s[i] == '.')
                    count++;
                    if(count > 3)
                        return 0;
                    if(temp[0] == '0' && temp.size() >1)
                        return 0;
                    int num=stoi(temp);
                    if(num < 0 || num > 255)
                        return 0;
                        
                    temp="";
                }
                
                else
                    temp+=s[i];
                
            }
            if(count != 3)
                return 0;
            
            return 1;
            
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
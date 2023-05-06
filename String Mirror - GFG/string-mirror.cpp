//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        // Code here
        string res = "";
        res+=str[0];
        char ch = str[0];
        for(int i=1;i<str.length();i++)
        {
            if(i == 1)
            {
                if(str[i] < ch)
                {
                    res+=str[i];
                    ch = str[i];
                }
                else
                    break;
            }
            
            else if(str[i] <= ch)
            {
                res+=str[i];
                ch = str[i];
            }
            else
                break;
        }
        
        string ans = res;
        reverse(res.begin(),res.end());
        ans+=res;
        
        return ans;
    }
};

// dbbhbb
// jjfupkravhthvqfbadrkqg



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends
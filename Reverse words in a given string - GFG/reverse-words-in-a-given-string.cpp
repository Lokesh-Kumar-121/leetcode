//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string str="";
        string temp;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i] != '.')
                temp+=s[i];
            if(s[i] == '.' || i == 0)
                {
                    reverse(temp.begin(),temp.end());
                    str+=temp;
                    if(i != 0)
                    str+='.';
                    if(i == 0 && s[i] == '.')
                    str+='.';
                    temp="";
                }
        }
        
        return str;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        
        unordered_map<char,int>mapp;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == 'b' || s[i] == 'a' || s[i] == 'l' || s[i] == 'o' || s[i] == 'n')
                mapp[s[i]]++;
        }
        
        char ch;
        int mn=INT_MAX;
        for(auto x:mapp)
        {
            if(x.second < mn)
            {
                mn=x.second;
                ch=x.first;
            }
        }
        // cout<<ch<<" "<<mn<<endl;
        
        char c1='l', c2='o';
        while(mapp[c1] < 2*mn || mapp[c2] < 2*mn)
        {
            mn--;
        }
        return mn;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends
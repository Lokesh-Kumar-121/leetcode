//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


bool isgood(int arr[])
{
    for(int i=0;i<26;i++)
    {
        if(arr[i] > 1)
            return false;
    }
    
    return true;
}


int longestSubstrDistinctChars (string s)
{
    // your code here
    int n=s.length();
    int arr[26]={0};
    
    int cnt=1,mx=1;
    
    arr[s[0]-'a']++;
    int i=0,j=1;
    while(j<n)
    {
        
        while(j<n && isgood(arr))
        {
            mx=max(mx,cnt);
            arr[s[j]-'a']++;
            cnt++;j++;
        }
        while(!isgood(arr))
        {
            //mx=max(mx,cnt);
            arr[s[i]-'a']--;
            i++;
            cnt--;
        }
        mx=max(mx,cnt);
    }
    return mx;
    
}
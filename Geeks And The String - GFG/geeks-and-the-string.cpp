//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
                st.push(s[i]);
            else
            {
                if(s[i] != st.top())
                {
                    st.push(s[i]);
                }
                else
                {
                    st.pop();
                }
            }
        }
        
        if(st.empty())
            return "-1";
        s.clear();
        while(!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
        
        return s;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int getMinimumDays(int n,string s, vector<int> &p) {
        // code here
        int count=0;
        for(int i=1;i<s.length();i++)
        {
            if(s[i] == s[i-1])
            {    count++;
                //  i++;
            }
        }
        
        if(count == 0)
            return 0;
            
        // cout<<count<<endl;
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans++;
            
            if(p[i] == 0 && s[p[i]] == s[p[i]+1])
            {
                count--;
                s[p[i]] = '?';
            }
            if(p[i] == n-1 && s[p[i]] == s[p[i]+1])
            {   
                count--;
                s[p[i]] = '?';
            }
            
            if(s[p[i]] == s[p[i]-1] || s[p[i]] == s[p[i]+1])
            {  
                if(s[p[i]] == s[p[i]-1] && s[p[i]] == s[p[i]+1])
                    count--;
                
                count--;
                s[p[i]] = '?';
            }
            
            // cout<<s<<endl;
                
            if(count <= 0)
                return ans;
                
            
        }
        
        return -1;
        
    }
};

// 4
// tttt
// 2 0 3 1


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        string S;cin>>S;
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        int res = obj.getMinimumDays(N,S, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
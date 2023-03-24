//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    long long solve(int X,int Y,string S){
      //code here
    //   string r1,r2;
    //   int mx,mn;
    //   mx = max(X,Y);
    //   mn = min(X,Y);
    //   if(X>=Y)
    //   {
    //       r1 = "pr";
    //       r2 = "rp";
    //   }
    //   else
    //   {
    //       r1 = "rp";
    //       r2 = "pr";
    //   }
      
    //   long long sum = 0;
      
    //   while(S.find(r1) < S.length())
    //   {
    //       int it = S.find(r1);
    //       S.erase(it,2);
    //       sum+=mx;
    //   }
      
    //   while(S.find(r2) < S.length())
    //   {
    //       int it = S.find(r2);
    //       S.erase(it,2);
    //       sum+=mn;
    //   }
      
    //   return sum;
    
    // long long sum = 0;
    
    // if(X>Y)
    // {
    //     for(int i=0;i<S.length()-1;i++)
    //     {
    //         if(S[i] == 'p' && S[i+1] == 'r')
    //         {
    //             sum+=X;
    //             S.erase(i,2);
    //             i-=2;
    //             // S[i] = '#';
    //             // S[i+1] = '#';
    //         }
    //     }
        
    //     for(int i=0;i<S.length()-1;i++)
    //     {
    //         if(S[i] == 'r' && S[i+1] == 'p')
    //         {
    //             sum+=Y;
    //             S.erase(i,2);
    //             i-=2;
    //             // S[i] = '#';
    //             // S[i+1] = '#';
    //         }
    //     }
    // }
    // else
    // {
    //     for(int i=0;i<S.length()-1;i++)
    //     {
    //         if(S[i] == 'r' && S[i+1] == 'p')
    //         {
    //             sum+=Y;
    //             S.erase(i,2);
    //             i-=2;
    //             // S[i] = '#';
    //             // S[i+1] = '#';
    //         }
    //     }
        
    //     for(int i=0;i<S.length()-1;i++)
    //     {
    //         if(S[i] == 'p' && S[i+1] == 'r')
    //         {
    //             sum+=X;
    //             S.erase(i,2);
    //             i-=2;
    //             // S[i] = '#';
    //             // S[i+1] = '#';
    //         }
    //     }
    // }
    
    // return sum;
    
    long long sum=0;
    string r1,r2;
      int mx,mn;
      mx = max(X,Y);
      mn = min(X,Y);
      if(X>=Y)
      {
          r1 = "pr";
          r2 = "rp";
      }
      else
      {
          r1 = "rp";
          r2 = "pr";
      }
      
      stack<char>st;
      
      char c1=r1[0],c2=r1[1];
      for(int i=0;i<S.length();i++)
      {
          if(st.empty())
            st.push(S[i]);
            
            else
            {
                if(S[i] == c2 && st.top() == c1)
                {
                    st.pop();
                    sum+=mx;
                }
                else
                    st.push(S[i]);
            }
      }
      
      S.clear();
      while(!st.empty())
      {
        S+=st.top();
        st.pop();
      }
      
    //   cout<<S<<endl;
    reverse(S.begin(),S.end());
      
      c1=r2[0];c2=r2[1];
      
      for(int i=0;i<S.length();i++)
      {
          if(st.empty())
            st.push(S[i]);
            
            else
            {
                if(S[i] == c2 && st.top() == c1)
                {
                    st.pop();
                    sum+=mn;
                }
                else
                    st.push(S[i]);
            }
      }
      
      return sum;
      
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here  
          unordered_map<char,int>m;
          for(int i=0;i<n;i++)
          {
              m[x[i]]=b[i];
          }
          
          vector<int>arr;
          for(int i=0;i<w.length();i++)
          {
              if(m.find(w[i]) != m.end())
                arr.push_back(m[w[i]]);
              else
                arr.push_back((int)w[i]);
          }
          
          
          int sum=0,mx=INT_MIN;
          int start,end,ind=0;
          for(int i=0;i<arr.size();i++)
          {
              sum+=arr[i];
              if(sum > mx)
              {
                  mx=sum;
                  start=ind;
                  end=i;
              }
              if(sum<0)
              {
                  sum=0;
                  ind=i+1;
              }
          }
          
          string res="";
          for(int i=start;i<=end;i++)
          {
              res+=w[i];
          }
          
          return res;
         
       
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends
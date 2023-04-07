//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:

    bool check(string s)
    {
       int i=0,j=s.length()-1;
       
       while(i<j)
       {
           if(s[i] != s[j])
            return false;
            else
            {
                i++;j--;
            }
       }
       
       return true;
    }

    int addMinChar(string str){    
        //code here
        
        // string temp="";
        // int size=0;
        // for(int i=0;i<str.length();i++)
        // {
        //     temp+=str[i];
        //     if(check(temp))
        //     {
        //         size=temp.length();
        //     }
        // }
        
        // return str.length()-size;
        int n = str.length();
        int size = str.length();
        while(!check(str))
        {
            str.pop_back();
            size--;
        }
        
        return n-size;
        
    }
};




//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int first=-1,last=-1;
    int left=0,right=n-1;
    int mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        
        if(arr[mid] > x)
            right=mid-1;
        else if(arr[mid] < x)
            left=mid+1;
            
        else
        {
            if(mid==0 || arr[mid]!=arr[mid-1]){
                first=mid;
                break;
            }
            else
                right=mid-1;
        }
    }
    
    left=0,right=n-1;
    
    while(left<=right)
    {
        mid=(left+right)/2;
        
        if(arr[mid] > x)
            right=mid-1;
        else if(arr[mid] < x)
            left=mid+1;
            
        else
        {
            if(mid==n-1 || arr[mid]!=arr[mid+1]){
                last=mid;
                break;
            }
            else
                left=mid+1;
        }
    }
    
    return {first,last};
    
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        // int i,j;
        // vector<int> candidates;
        // for(i=0;i<N;i++)
        // {
        //     j=N-1;
        //     while(A[j]<A[i])
        //         j--;
        //     candidates.push_back(j-i);
        // }
        // return *max_element(candidates.begin(),candidates.end());    
        
        vector<int>leftmin(N),rightmax(N);
        leftmin[0]=A[0];
        for(int i=1;i<N;i++)
        {
            leftmin[i]=min(leftmin[i-1],A[i]);
        }
        rightmax[N-1]=A[N-1];
        for(int i=N-2;i>=0;i--)
        {
            rightmax[i]=max(rightmax[i+1],A[i]);
        }
        
        int i=0,j=0;
        int mx=-1;
        while(i<N && j<N)
        {
            if(leftmin[i] <= rightmax[j])
            {
                mx=max(mx,j-i);
                j++;
            }
            else
                i++;
        }
        
        return mx;
        
        
        // vector<pair<int,int>>sm(N); //suffix_max arry
        // int mx=A[N-1];
        // int ind=N-1;
        // for(int i=N-1;i>=0;i--)
        // {
        //     if(A[i] >= mx)
        //     {
        //         //sm.push_back({mx,ind});
        //         mx=A[i];
        //         ind=i;
        //         sm[i].first=mx;
        //         sm[i].second=ind;
                
        //     }
        //     else{
        //         //sm.push_back({mx,ind});
        //         sm[i].first=mx;
        //         sm[i].second=ind;
                
        //     }
        // }
        
        // //reverse(sm.begin(),sm.end());
        // for(int i=0;i<sm.size();i++)
        // {
        //     cout<<sm[i].first<<","<<sm[i].second<<"  ";
        // }
        // cout<<endl;
        // int res=INT_MIN;
        // for(int i=0;i<N;i++)
        // {
        //     res=max(res,sm[i].second-i);
            
        // }
        
        // return res;
        
    }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends
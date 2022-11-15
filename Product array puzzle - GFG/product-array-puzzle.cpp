//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here     
       int countzero=0;
       //int ind;
       for(int i=0;i<n;i++)
       {
           if(nums[i] == 0)
           countzero++;
          // ind=i;
       }
       
       if(countzero > 1)
        {
            vector<long long int>res(n,0);
            return res;
        }
        
        else if(countzero==1)
        {
            long long int prod=1;
            for(int i=0;i<n;i++)
            {
                if(nums[i] == 0)
                    continue;
                    
                prod*=nums[i];
            }
            //cout<<prod<<endl;
            vector<long long int>res(n,0);
            // for(auto x:res)
            //     cout<<x<<" ";
            //     cout<<endl;
             for(int i=0;i<n;i++)
            {
                if(nums[i] == 0)
                    res[i]=prod;
                
             }
            return res;
        }
        else
        {
            long long int prod=1;
            for(int i=0;i<n;i++)
            {
                prod*=nums[i];
            }
            long long int temp=prod;
            vector<long long int>res;
            for(int i=0;i<n;i++)
            {
                prod/=nums[i];
                res.push_back(prod);
                prod=temp;
            }
            return res;
        }
        
        return {0};
       
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends
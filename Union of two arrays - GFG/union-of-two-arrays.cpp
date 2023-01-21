//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
    //     int i=0,j=0;
    //   vector<int> uni;
    //   sort(arr1,arr1+n);
    //   sort(arr2,arr2+m);
    //   while(i<n && j<m)
    //   {
    //       if(i>0 && arr1[i]==arr1[i-1]){i++; continue;}
    //       if(j>0 && arr2[j]==arr2[j-1]){j++; continue;}
           
    //       if(arr1[i] < arr2[j]){uni.push_back(arr1[i]); i++;}
           
    //       else if(arr2[j] < arr1[i]){uni.push_back(arr2[j]); j++;}
           
    //       else{uni.push_back(arr1[i]); i++; j++;}
           
    //   }
       
    //   while(i<n)
    //   {
    //       if(i==0){uni.push_back(arr1[i]);}
    //       if(i>0 && arr1[i]!=arr1[i-1]){
    //       uni.push_back(arr1[i]);
    //       }i++;
           
    //   }
    //   while(j<m)
    //   {
    //       if(j==0){uni.push_back(arr2[j]);}
    //       if(j>0 && arr2[j]!=arr2[j-1]){
    //       uni.push_back(arr2[j]);
    //       }j++;
    //   }
    //   return uni.size();
    int i=0,j=0,k=0;
    int arr[n+m];
    sort(a,a+n);
    sort(b,b+m);
    
    while(i<n && j<m)
        {
            if(i>0 && a[i]==a[i-1]){i++;continue;}
            if(j>0 && b[j]==b[j-1]){j++;continue;}
            if(a[i] < b[j]){arr[k]=a[i];i++;k++;}
            else if(a[i] > b[j]){arr[k]=b[j];j++;k++;}
            else{arr[k]=a[i];i++;j++;k++;}
        }
        
        while(i<n)
        {
            if(i==0)
            {
                arr[k]=a[0];k++;
            }
            if(i>0 && a[i]!=a[i-1])
               { arr[k]=a[i];
                k++;}
                i++;
                
        }
        while(j<m)
        {
            
            if(j==0)
            {
                arr[k]=b[0];k++;
            }
            if(j>0 && b[j]!=b[j-1])
               { arr[k]=b[j];
                k++;}
                j++;
                
        }
        
        return (k);
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
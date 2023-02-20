//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    vector<int>nums(n);
    int i=0,j=n-1;
    int count=0;
    while(i<=j)
    {
        if(count&1)
        {
            nums[count++]=arr[j--];
        }
        else
        {
            nums[count++]=arr[i++];
        }
    }
    // while(i<j)
    // {
    //     swap(arr[i],arr[j]);
    //     i++;
    //     swap(arr[i],arr[j]);
    //     i++;j--;
        
    // }
    
    // for(int i=0;i<n;i++)
    //     cout<<nums[i]<<" ";
    // cout<<endl;
    
    long long int sum=0;
    for(int i=1;i<n;i++)
    {
        sum+=abs(nums[i]-nums[i-1]);
    }
    
    sum+=abs(nums[n-1] - nums[0]);
    
    return sum;
}

// 1 2 4 8

// 1 8 4 2
// 1 8 2 4

// 1 8 2 4
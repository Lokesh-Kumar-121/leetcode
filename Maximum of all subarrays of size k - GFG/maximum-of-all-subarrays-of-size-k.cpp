//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int>res;
        deque<int>dq;
        for(int i=0;i<k;i++)
        {
            if(dq.empty())
                dq.push_back(arr[i]);
            else
            {
                if(arr[i] < dq.back())
                    dq.push_back(arr[i]);
                else
                    {
                        while(!dq.empty() && arr[i] > dq.back())
                        {
                            dq.pop_back();
                        }
                        dq.push_back(arr[i]);
                    }
            }
        }
        int i=0,j=k;
        while(j<n)
        {
            res.push_back(dq.front());
            if(arr[i] == dq.front())
                dq.pop_front();
            i++;
            
            if(dq.empty())
                dq.push_back(arr[j]);
            else
            {
                if(arr[j] < dq.back())
                    dq.push_back(arr[j]);
                else
                    {
                        while(!dq.empty() && arr[j] > dq.back())
                        {
                            dq.pop_back();
                        }
                        dq.push_back(arr[j]);
                    }
            }
            j++;
            
        }
        res.push_back(dq.front());
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
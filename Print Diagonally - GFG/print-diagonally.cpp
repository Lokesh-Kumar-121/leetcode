//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int>arr;
		
// 		int size=(n-1)+(n-1);
		
// 	//	for(int i=0;i<=size;i++)
// 		//{
		
// 		    for(int j=0;j<A.size();j++)
// 		    {
// 		        for(int k=0;k<A[j].size();k++)
// 		        {
// 		            if(j+k==i)
// 		                arr.push_back(A[j][k]);
// 		        }
		        
// 		    }
	//	}
	
	
// 	    int i=0,j=0;
	    
// 	    while(i<n && j<n)
// 	    {
// 	        arr.push_back(A[i][j]);
// 	        j++;
	        
// 	        while(j!=0)
// 	        {
// 	            arr.push_back(A[i][j]);
// 	            i++;
// 	            j--;
// 	        }
	        
// 	    }
		
// 		return arr;
        
        vector<int>num;
        unordered_set<int> s;
        for(int i=0;i<n;i++)
        {
            num.push_back(i);
            s.insert(i);
            
        }
            
        int size=(n-1)+(n-1);
        
        for(int sum=0;sum<=size;sum++)
        {
            for(int i=0;i<num.size();i++)
            {
                int j=sum-i;
                if(s.find(j)!=s.end())
                {
                    arr.push_back(A[i][j]);
                }
            }
        }
        return arr;


	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends
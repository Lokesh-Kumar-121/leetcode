//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        //code here.
        
        
        unordered_map<int,int>sett;
        vector<int>res;
        
        for(int z=0;z<k;z++)
            sett[arr[z]]++;
            
        res.push_back(sett.size());
        
        int i=0,j=k;
        
        while(j < n)
        {
            
            sett[arr[i]]--;
            sett[arr[j]]++;
            if(sett[arr[i]] == 0)
                sett.erase(arr[i]);
            res.push_back(sett.size());
            j++;i++;
        }
        
        
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
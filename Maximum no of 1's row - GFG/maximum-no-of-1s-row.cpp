//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int n, int m)
        {
            // your code here
            int ind,mn=INT_MAX;
            for(int i=0;i<n;i++)
            {
                int count=0;
                for(int j=0;j<m;j++)
                {
                    if(Mat[i][j] == 1)
                        break;
                    else
                        count++;
                }
                
                if(count < mn)
                {
                    mn=count;
                    ind=i;
                }
            }
            
            return ind;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends
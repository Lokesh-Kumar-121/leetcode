//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int array[], int n){
        // code here
        vector<int>h;
        for(int i=0;i<n;i++)
        {
            h.push_back(array[i]);
        }
        
        vector<int>prefix(h.size());
        vector<int>suffix(h.size());
        
        long long res=0;
        
        int mx=INT_MIN;
        for(int i=0;i<h.size();i++)
        {
            if(h[i] > mx)
            {
                mx=h[i];
            }
            prefix[i] = mx;
        }
        mx=INT_MIN;
        for(int i=h.size()-1;i>=0;i--)
        {
            if(h[i] > mx)
            {
                mx=h[i];
            }
            suffix[i] = mx;
        }
        
        for(int i=1;i<h.size()-1;i++)
        {
            res+=min(prefix[i],suffix[i]) - h[i];
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
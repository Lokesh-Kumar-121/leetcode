//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& arr) {
         // Code here
         sort(arr.begin(),arr.end());
         vector<vector<int>>res;
         vector<int>ans;
         int count=1;
         ans.push_back(count);
         for(int i=1;i<arr.size();i++)
         {
            int flag=0;
            if(arr[i][0] >= arr[i-1][0] && arr[i][0] <= arr[i-1][1])
            {
                flag=1;
                arr[i][0]=min(arr[i][0],arr[i-1][0]);
                arr[i][1]=max(arr[i][1],arr[i-1][1]);
            }
            if(flag==0)
            {
                count++;
            }
            ans.push_back(count);
         }
         
        // for(auto x:arr)
        // {
        //     for(auto z:x)
        //         cout<<z<<",";
        //     cout<<"  ";
        // }
        
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i][0] != arr[i+1][0])
            {
                res.push_back(arr[i]);
            }
        }
        res.push_back(arr[arr.size()-1]);
        
        // for(auto x:ans)
        //     cout<<x<<" ";
        // cout<<endl;
        
        
        
        return res;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends
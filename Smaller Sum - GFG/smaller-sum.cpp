//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:

    static bool cmp(pair<long long,long long>&a, pair<long long,long long>&b)
    {
        return a.second < b.second;
    }

    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        vector<pair<long long,long long>>nums;
        for(int i=0;i<arr.size();i++)
        {
            nums.push_back({arr[i],i});
        }
        
        sort(nums.begin(),nums.end());
        // for(auto x:nums)
        //     cout<<x.first<<" ";
        // cout<<endl;
        
        vector<long long>prefix;
        prefix.push_back(nums[0].first);
        
        for(int i=1;i<nums.size();i++)
        {
            
            prefix.push_back(nums[i].first + prefix[i-1]);
            
        }
        
        // for(auto x:prefix)
        //     cout<<x<<" ";
        // cout<<endl;
        
        vector<long long>pre;
        pre.push_back(0);
        
        for(int i=1;i<prefix.size();i++)
        {
            if(nums[i].first == nums[i-1].first)
            {
                pre.push_back(pre[pre.size()-1]);
            }
            else
            {
                pre.push_back(prefix[i]-nums[i].first);
            }
        }
        
        
        
        // for(auto x:pre)
        //     cout<<x<<" ";
        // cout<<endl;
        
        for(int i=0;i<nums.size();i++)
        {
            nums[i].first = pre[i]; 
        }
        
        sort(nums.begin(),nums.end(),cmp);
        
        pre.clear();
        
        for(int i=0;i<nums.size();i++)
        {
            pre.push_back(nums[i].first);
        }
        
        return pre;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends
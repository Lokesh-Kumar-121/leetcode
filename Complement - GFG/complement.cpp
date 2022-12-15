//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string s, int n) {
        // code here
        vector<int>arr;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')
            {
                //s[i]='1';
                arr.push_back(1);
                flag=1;
            }
            else
            {
                //s[i]='-1';
                arr.push_back(-1);
                
                
            }
        }
        
        // cout<<s<<endl;
        // for(auto x:arr)
        // cout<<x;
        // cout<<endl;
        
        
        if(flag==0)
            return {-1};
        
        int sum=0,mx=INT_MIN;
        int start,end,ind=0;
        for(int i=0;i<n;i++)
        {
            //sum+=stoi(s[i]);
            sum+=arr[i];
            if(sum > mx)
            {
                mx=sum;
                start=ind;
                end=i;
            }
            if(sum < 0)
            {
                sum=0;
                ind=i+1;
            }
        }
        return {start+1,end+1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends
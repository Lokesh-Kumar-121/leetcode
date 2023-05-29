//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  void change(string &str)
  {
      string s="";
      for(int i=0;i<str.length();i++)
      {
          if(isupper(str[i]))
            s+=str[i];
      }
      
      str = s;
  }
  
    vector<string> CamelCase(int N, vector<string> D, string P) {
        // code here
        
        vector<string>res;
        for(int i=0;i<D.size();i++)
        {
            string str = D[i];
            change(str);
            // cout<<str<<endl;
            string temp = str.substr(0,P.length());
            if(temp == P)
                res.push_back(D[i]);
        }
        
        if(res.size())
            return res;
            
        return {"-1"};
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
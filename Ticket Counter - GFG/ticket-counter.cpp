//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int k) {
        // code here
        int i=1,j=N;
        
        while(i<j)
        {
            for(int x=0;x<k;x++)
            {
                i++;
                if(i>=j)
                return i;
            }
            
            
            for(int x=0;x<k;x++)
            {
                j--;
                if(j<=i)
                return j;
            }
            
            

        }
        
        return N;
        
    }
};

//       i   j
// 1 2 3 4 5 6 7 8 9


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
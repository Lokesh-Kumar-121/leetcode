class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int diff=0;
        
        int n=arr.size();
        int flag=0;
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]-arr[i-1] != arr[i+1]-arr[i])
            {
                flag=1;
                break;
            }
               
        }
        
        if(flag==1)
            return false;
        else
            return true;
        
    }
};
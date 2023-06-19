class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int mx = 0;
        int ans = INT_MIN;
        for(int i=0;i<gain.size();i++)
        {
            ans = max(ans,mx);
            mx += gain[i];
        }
        ans = max(ans,mx);
        return ans;
        
        
    }
};
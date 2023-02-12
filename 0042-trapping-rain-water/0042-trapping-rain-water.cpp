class Solution {
public:
    int trap(vector<int>& h) {
        vector<int>prefix(h.size());
        vector<int>suffix(h.size());
        
        int res=0;
        
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
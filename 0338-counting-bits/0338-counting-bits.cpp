class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>res;
        for(int i=0;i<=n;i++)
        {
            int ans=__builtin_popcount(i);
            res.push_back(ans);
        }
        return res;
        
    }
};
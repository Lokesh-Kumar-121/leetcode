class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>res;
        for(int i=0;i<=n;i++)
        {
            // int ans=__builtin_popcount(i);
            int ans=0;
            int temp=i;
            while(temp!=0)
            {
                if(temp&1)
                    ans+=1;
                temp=temp>>1;
            }
            res.push_back(ans);
        }
        return res;
        
    }
};
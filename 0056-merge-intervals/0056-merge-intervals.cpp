class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        sort(inter.begin(),inter.end());
        vector<vector<int>>res;
        for(int i=1;i<inter.size();i++)
        {
            if(inter[i][0] >= inter[i-1][0] && inter[i][0] <= inter[i-1][1])
            {
                inter[i][0] = min(inter[i][0],inter[i-1][0]);
                inter[i][1] = max(inter[i][1],inter[i-1][1]);
            }
            // else
            //     res.push_back({inter[i][0],inter[i][1]});
        }
        
        
        
        for(int i=0;i<inter.size()-1;i++)
        {
            if(inter[i][0] == inter[i+1][0] || inter[i][1] == inter[i+1][1])
                continue;
                
            res.push_back({inter[i][0],inter[i][1]});
        }
        
        res.push_back({inter[inter.size()-1][0],inter[inter.size()-1][1]});
        
        return res;
        
    }
};
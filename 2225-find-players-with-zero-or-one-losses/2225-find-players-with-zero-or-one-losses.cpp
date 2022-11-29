class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        unordered_map<int,int>win;
        unordered_map<int,int>lose;
        int n=matches.size();
        for(int i=0;i<n;i++)
        {
            win[matches[i][0]]++;
            lose[matches[i][1]]++;
            
        }
        
        vector<int>res1;
        vector<int>res2;
        vector<vector<int>>arr;
        
        for(auto x:win)
        {
            if(lose.find(x.first) == lose.end())
            {
                res1.push_back(x.first);
            }
        }
        
        for(auto x:lose)
        {
            if(x.second == 1)
                res2.push_back(x.first);
        }
        
        sort(res1.begin(),res1.end());
        sort(res2.begin(),res2.end());
        
        arr.push_back(res1);
        arr.push_back(res2);
        
        return arr;
    }
};
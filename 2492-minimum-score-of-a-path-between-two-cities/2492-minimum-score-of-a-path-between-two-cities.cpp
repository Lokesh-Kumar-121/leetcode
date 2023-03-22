class Solution {
public:
    int minScore(int n, vector<vector<int>>& r) {
//         int mn=INT_MAX;
//         for(int i=0;i<r.size();i++)
//         {
//             mn=min(mn,r[i][2]);
//         }
        
//         return mn;
        
        int k=r.size();
        vector<vector<pair<int,int>>>arr(n+1);
        for(int i=0;i<k;i++)
        {
            arr[r[i][0]].push_back({r[i][1],r[i][2]});
            arr[r[i][1]].push_back({r[i][0],r[i][2]});
        }
        
        vector<int>res(n+2,0);
        
        queue<vector<int>>que;
        que.push({n,INT_MAX});
        int result=INT_MAX;
        
        while(!que.empty())
        {
            auto it=que.front();
            que.pop();
            result=min(result,it[1]);
            res[it[0]]=1; 
            for(auto ele:arr[it[0]])
            {
                if(!res[ele.first])
                {
                    que.push({ele.first,ele.second});
                }
            }
        }
        return result;

        
    }
};
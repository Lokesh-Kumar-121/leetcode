class Solution {
public:
    
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        if(a[2] == b[2])
        {
            if(abs(a[0]) == abs(b[0]))
            {
                return abs(a[1]) < abs(b[1]);
            }
            return (a[0]) < (b[0]);
        }
        return a[2]<b[2];
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>res;
        for(int i=0;i<points.size();i++)
        {
            int sq=(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            // sq=sqrt(sq);
            points[i].push_back(sq);
        }
        
        sort(points.begin(),points.end(),cmp);
        for(int i=0;i<k;i++)
        {
            points[i].pop_back();
            //cout<<points[i][0]<<"#"<<points[i][2]<<" ";
            res.push_back(points[i]);
        }
        
        return res;
    }
};
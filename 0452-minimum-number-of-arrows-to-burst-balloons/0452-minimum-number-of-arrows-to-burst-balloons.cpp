class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end());
        // for(auto x:points)
        //     cout<<x[0]<<","<<x[1]<<" ";
        // cout<<endl;
        int count=points.size();
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0] >= points[i-1][0] && points[i][0] <= points[i-1][1])
            {
                count--;
                points[i][0]=max(points[i][0],points[i-1][0]);
                points[i][1]=min(points[i][1],points[i-1][1]);
            }
        }
        // for(auto x:points)
        //     cout<<x[0]<<","<<x[1]<<" ";
        // cout<<endl;
        return count;
    }
};



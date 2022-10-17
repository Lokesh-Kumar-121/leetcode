class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
     
        int dist=INT_MAX;
        int ind=-1;
        
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0] == x || points[i][1]==y)
            {
                 int py=abs(points[i][1]-y);
                 int px=abs(points[i][0]-x);
                 if((py+px) < dist)
                 {
                    dist=py+px;
                    ind=i;
                 }
                    
            }
        }
        
        return ind;
        
    }
};
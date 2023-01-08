class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        
        //int maxPoints(vector<vector<int>>& points) {
        int N = points.size(), ans = 0;
        if(N <= 2)  return N;
        
        sort(points.begin(), points.end());
        
        auto getSlope = [&](int i, int j) {
            double x1 = points[i][0], y1 = points[i][1];
            double x2 = points[j][0], y2 = points[j][1];
            return (y2 - y1) / (x2 - x1);
        };
        
        for(int i = 0; i < N; i++) {
            unordered_map<double, int> slopeCount;
            for(int j = i + 1; j < N; j++) {
                double slope = getSlope(i, j);
                slopeCount[slope]++;
                ans = max(ans, slopeCount[slope]);
            }
        }
        return ans + 1;
    }
        
    //}
};
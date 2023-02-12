class Solution {
public:
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        vector<vector<int>> r (roads.size()+1);
        for (int i = 0; i < roads.size(); i++) {
            r[roads[i][0]].push_back(roads[i][1]);
            r[roads[i][1]].push_back(roads[i][0]);
        }
        long long res = 0;
        countPass(0,0,r,res,seats);
        return res;
    }

    long long countPass(int cur, int prev, vector<vector<int>>& r, long long& res, int seats) {
        long long rr = 1;
        for (int next:r[cur]) {
            if (next != prev) {
                rr += countPass(next, cur, r, res, seats);
            }
        }
        if (cur) res += (rr-1)/seats+1;
        return rr;
    }
};
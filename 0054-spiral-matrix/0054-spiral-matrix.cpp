class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int a = 0,b=0,c=matrix.size(),d=matrix[0].size();
        vector<int> v;
        while(a<c && b<d){
            for(int j=b;j<d && a<c;j++)
                v.push_back(matrix[a][j]);
            a++;
            for(int i=a;i<c && b<d;i++)
                v.push_back(matrix[i][d-1]);
            d--;
            for(int j=d-1;j>=b && a<c;j--)
                v.push_back(matrix[c-1][j]);
            c--;
            for(int i=c-1;i>=a && b<d;i--)
                v.push_back(matrix[i][b]);
            b++;
        }
        return v;
    }
};
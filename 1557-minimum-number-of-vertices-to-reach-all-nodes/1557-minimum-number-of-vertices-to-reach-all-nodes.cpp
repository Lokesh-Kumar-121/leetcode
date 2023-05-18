class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        vector<int>res;
        
        vector<int> arr[n];
        
        for(int i=0;i<edges.size();i++)
        {
            int from = edges[i][0];
            int to = edges[i][1];
            
            arr[to].push_back(from);
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i].size() == 0)
                res.push_back(i);
        }
        
        return res;
        
        
    }
};
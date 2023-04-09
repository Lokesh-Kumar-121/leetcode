class Solution {
    
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adjList;
        int n = colors.size();
        vector<int> indegree(n);
        vector<vector<int>> counter(n, vector<int>(26, 0));
        for(auto& edge: edges){
            adjList[edge[0]].push_back(edge[1]);
            indegree[edge[1]]++;
        }
        queue<int> q;
        for(int i=0; i<n;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        int nodes = 0;
        int ans= -1;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            nodes++;
            counter[cur][colors[cur]-'a']++;
            ans = max(ans, counter[cur][colors[cur]-'a']);
            for(int nxt: adjList[cur]){
                for(int i=0; i<26; i++){
                    counter[nxt][i] = max(counter[nxt][i], counter[cur][i]);
                }
                indegree[nxt]--;
                if(indegree[nxt] == 0){
                    q.push(nxt);
                }
            }
        }
        return nodes < n ? -1: ans;
    }
};
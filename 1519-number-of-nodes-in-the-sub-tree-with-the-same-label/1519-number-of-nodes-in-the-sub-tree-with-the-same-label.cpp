class Solution {
public:
    vector<int> solve(int node, int parent, vector<int> &ans, vector<vector<int>> &adj, string &labels){
        vector<int> cnt(26,0);
        for(auto child:adj[node]){
            if(child!=parent){
                vector<int> adjCnt = solve(child,node,ans,adj,labels);
                for(int i=0;i<26;i++){
                    cnt[i] += adjCnt[i];
                }
            }
        }
        cnt[labels[node]-'a']++;
        ans[node] = cnt[labels[node]-'a'];
        return cnt;
    }
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adj(n);
        for(auto i: edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int> ans(n,0);
        solve(0,-1,ans,adj,labels);
        return ans;
    }
};
class Solution {
public:
    void dfs(int s, vector<bool> &visited, vector<vector<int>> &graph, vector<int> &temp, vector<vector<int>> &ans)
    {
        if(s == graph.size() - 1)
        {
            temp.push_back(s);
            ans.push_back(temp);
            temp.pop_back();
            return;
        }

        visited[s] = true;
        temp.push_back(s);
        for(auto i: graph[s])
        {
            if(!visited[i])
            {
                dfs(i, visited, graph, temp, ans);
            }
        }

        visited[s] = false;
        temp.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<bool> visited(graph.size(), false);
        vector<int> temp;
        dfs(0, visited, graph, temp, ans);
        return ans;
    }
};
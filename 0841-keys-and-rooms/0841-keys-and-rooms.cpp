class Solution {
public:

    void dfs(int i,vector<int>&unlock,vector<vector<int>>& rooms){
        if(unlock[i])return;
        unlock[i]=true;
        for(int j=0;j<rooms[i].size();j++){
            if(unlock[rooms[i][j]])continue;
            // unlock[rooms[i][j]] = true;
            dfs(rooms[i][j],unlock,rooms);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int>vis(rooms.size(),0);
        dfs(0,vis,rooms);

        return accumulate(vis.begin(),vis.end(),0)==vis.size();
    }
};
// class Solution {
// public:
//     int mx=INT_MIN;
    
//     int func(int ind,int mn,vector<pair<int,int>>&arr,int score,vector<vector<int>>&dp)
//     {
//         if(ind>=arr.size())
//         {
            
//             return max(mx,score);
//         }
        
//         if(dp[ind][mn] != -1)
//             return dp[ind][mn];
        
//         int left=INT_MIN;
        
//         if(arr[ind].second >= mn)
//         {
//             left=func(ind+1,max(mn,arr[ind].second),arr,score+arr[ind].second,dp);
//         }
        
//         int right=func(ind+1,mn,arr,score,dp);
        
//         return max(left,right);
//     }
    
//     int bestTeamScore(vector<int>& scores, vector<int>& ages) {
//         vector<pair<int,int>>arr;
//         //int mn=*min_element(scores.begin(),scores.end());
//         vector<vector<int>>dp(ages.size(),vector<int>(10e6+1,-1));
//         for(int i=0;i<ages.size();i++)
//         {
//             arr.push_back({ages[i],scores[i]});
//         }
        
//         sort(arr.begin(),arr.end());
        
//         return func(0,INT_MIN,arr,0,dp);
//         // return mx;
//     }
// };

// 1,5  1,5  2,4  2,6

class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int ans=0,dp[scores.size()];
        vector<pair<int,int>> arr;
        for(int i=0;i<ages.size();i++)
            arr.push_back({ages[i],scores[i]});
        sort(arr.begin(),arr.end());
        for(int i=0;i<ages.size();i++){
            dp[i]=arr[i].second;
            for(int j=0;j<i;j++)
                if(arr[j].second<=arr[i].second)
                    dp[i]=max(dp[i],dp[j]+arr[i].second);
            
            ans=max(dp[i],ans);
        }
        return ans;
    }
};
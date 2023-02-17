class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         int n=strs.size();
//         vector<vector<int>>freq(n,vector<int>(26,0));
        
//         for(int i=0;i<n;i++)
//         {
//             string s=strs[i];
//             for(int j=0;j<s.length();j++)
//             {
//                 freq[i][s[j] - 'a']++;
//             }
//         }
        
//         vector<vector<string>>res;
//         vector<int>vis(n,0);
        
//         for(int i=0;i<n;i++)
//         {
//             if(vis[i] == 0)
//             {
//                 vis[i] = 1;
//             vector<string>temp;
//             temp.push_back(strs[i]);
//             for(int j=i+1;j<n;j++)
//             {
//                 if(freq[i] == freq[j])
//                 {
//                     temp.push_back(strs[j]);
//                     vis[j] = 1;
//                 }
//             }
//             res.push_back(temp);
//             }
//         }
        
//         return res;
        int n=strs.size();
        map<string,vector<string>>mapp;
        for(int i=0;i<n;i++)
        {
            string s = strs[i];
            sort(s.begin(),s.end());
            mapp[s].push_back(strs[i]);
        }
        
        vector<vector<string>>res;
        for(auto x : mapp)
        {
            res.push_back(x.second);
        }
        
        return res;
    }
};
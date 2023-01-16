class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        
            
        vector<vector<int>>res;
        if(intervals.size() == 0){
            res.push_back(newInterval);
            return res;
        }
        if(intervals[0][0] > newInterval[1])
        {
            res.push_back(newInterval);
            for(int i=0;i<intervals.size();i++)
            {
                res.push_back(intervals[i]);
            }
            return res;
        }
        
        int i=0;
        while(i<intervals.size() && intervals[i][1] < newInterval[0])
        {
            res.push_back(intervals[i]);
            i++;
        }
        if(res.size()==intervals.size())
        {
            res.push_back(newInterval);
            return res;
        }
        
        pair<int,int>merge={0,0};
        merge.first=min(intervals[i][0],newInterval[0]);
        
        while(i<intervals.size() && newInterval[1] >= intervals[i][0])
        {
            i++;
        }
        i--;
        merge.second=max(intervals[i][1],newInterval[1]);
        res.push_back({merge.first,merge.second});
        i++;
        while(i<intervals.size())
        {
            res.push_back(intervals[i]);
            i++;
        }
        return res;
    }
};

// class Solution {
// public:
//     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//         intervals.push_back(newInterval);
//         for(int i=intervals.size()-2;i>=0;i--){
//             if(intervals[i][0]>newInterval[0]){
//                 swap(intervals[i],intervals[i+1]);
//             }
//             else if(intervals[i][0]==newInterval[0]){
//                 if(intervals[i][1]>newInterval[1]){
//                     swap(intervals[i],intervals[i+1]);
//                 }
//             }
//             else{
//                 break;
//             }
//         }
//         vector<vector<int>>ans;
//         ans.push_back(intervals[0]);
//         for(int i=1;i<intervals.size();i++){
//             if(ans[ans.size()-1][1]<intervals[i][0]){
//                 ans.push_back(intervals[i]);
//             }
//             else{
//                 ans[ans.size()-1][1]=max(ans[ans.size()-1][1],intervals[i][1]);
//             }
//         }
//         return ans;
//     }
// };
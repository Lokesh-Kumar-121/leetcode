class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        unordered_set<int>sett1,sett2;
        
        for(int i=0;i<nums1.size();i++)
        {
            sett1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            sett2.insert(nums2[i]);
        }
        
        vector<int>temp;
        
        for(auto x:sett1)
        {
            if(sett2.find(x) == sett2.end())
                temp.push_back(x);
        }
        
        ans.push_back(temp);
        
        temp.clear();
        
        for(auto x:sett2)
        {
            if(sett1.find(x) == sett1.end())
                temp.push_back(x);
        }
        
        ans.push_back(temp);
        
        return ans;
        
    }
};
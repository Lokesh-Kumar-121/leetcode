class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int mx=INT_MIN;
        int res;
        for(auto x:m)
        {
            if(x.second > mx)
            {
                mx=x.second;
                res=x.first;
            }
        }
        
        return res;
        
        
    }
};
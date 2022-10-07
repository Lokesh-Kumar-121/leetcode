class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int>arr;
        int sum=0;
        for(auto x:nums)
        {
           sum+=x;
           arr.push_back(sum);
        }
        
        return arr;
    }
};
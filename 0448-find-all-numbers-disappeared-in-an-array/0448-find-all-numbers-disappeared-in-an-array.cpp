class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>sett;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            sett.insert(nums[i]);
        }
        
        for(int i=1;i<=nums.size();i++)
        {
            if(sett.find(i) == sett.end())
                res.push_back(i);
        }
        return res;
    }
};
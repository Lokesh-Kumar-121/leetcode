class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        if(nums.size() == 0)
            return {-1,-1};
        int first=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int last=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        
        last=last-1;
       if(first >= nums.size() || nums[first] != target)
           first=-1;
        if(last >= nums.size() || nums[last] != target)
            last=-1;
        
        return {first,last};
    }
};
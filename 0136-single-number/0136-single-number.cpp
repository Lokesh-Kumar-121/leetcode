class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int uni=0;
        for(int i=0;i<nums.size();i++)
        {
            uni = uni ^ nums[i];
        }
        
        return uni;
    }
};
class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        if(nums.size() == 1)
            return true;
        if(nums[0]==0)
            return false;
        
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
                flag=1;
        }
        if(flag == 0)
            return true;
        
        int r=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i > r)
                return false;
            r=max(r,nums[i]+i);
            if(r>=nums.size())
                return true;
        }
        return true;
    }
};
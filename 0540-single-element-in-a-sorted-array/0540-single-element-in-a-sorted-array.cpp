class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            x^=nums[i];
        }
        
        return x;
    }
};

// 1 1 2 3 3 4 4 8 8 
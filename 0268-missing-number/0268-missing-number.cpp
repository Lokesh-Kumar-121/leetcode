class Solution {
public:
    int missingNumber(vector<int>& nums) {
     
//         int n=nums.size();
//         int x=0;
//         for(auto z:nums)
//         {
//             x^=z;
//         }
        
//         for(int i=0;i<=n;i++)
//         {
//             x^=i;
//         }
        
        
//         return x;
        
        vector<int>hash(nums.size() + 1,0);
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]] = 1;
        }
        
        for(int i=0;i<hash.size();i++)
        {
            if(hash[i] == 0)
                return i;
        }
        return -1;
    }
};


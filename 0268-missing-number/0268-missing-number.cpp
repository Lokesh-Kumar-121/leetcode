class Solution {
public:
    int missingNumber(vector<int>& nums) {
     //////XOR///////
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
        
        /////hashhh//////
//         vector<int>hash(nums.size() + 1,0);
//         for(int i=0;i<nums.size();i++)
//         {
//             hash[nums[i]] = 1;
//         }
        
//         for(int i=0;i<hash.size();i++)
//         {
//             if(hash[i] == 0)
//                 return i;
//         }
//         return -1;
        
        
       //////CYCLIC SORT/////
        
        int n=nums.size();
        
        int i=0;
        while(i<n)
        {
            if(nums[i] != i && nums[i] != n)
            {
                swap(nums[i],nums[nums[i]]);
            }
            else
                i++;
        }
        
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != i)
                return i;
        }
        
        return n;
    }
    
};


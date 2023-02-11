class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /////////XOR wont work//////////
//         int n=nums.size()-1;
        
//         int x=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             x=x^nums[i];
//         }
//         for(int i=1;i<=n;i++)
//         {
//             x=x^i;
//         }
        
//         return x;
        
        ///////hashmap/////
//         int n=nums.size();
//         vector<int>hash(n,0);
//         for(int i=0;i<nums.size();i++)
//         {
//             hash[nums[i]]++;
//         }
        
//         for(int i=0;i<n;i++)
//         {
//             if(hash[i] > 1)
//                 return i;
//         }
//         return -1;
        
        ///////CYCLIC SORT//////
        
        int i=0;
        while(i<nums.size())
        {
            if(nums[i] != i+1)
            {
                if(nums[i] != nums[nums[i] - 1])
                    swap(nums[i],nums[nums[i] - 1]);
                else
                    return nums[i];
            }
            else
                i++;
            
        }
        
        return -1;
        
        
    }
};


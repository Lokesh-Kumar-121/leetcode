class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        vector<int>res;
        vector<int>hash(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i] - 1]++;
        }
        
        for(int i=0;i<hash.size();i++)
        {
            if(hash[i] > 1)
                res.push_back(i+1);
        }
        for(int i=0;i<hash.size();i++)
        {
            if(hash[i] == 0)
                res.push_back(i+1);
        }
        
        return res;
        
        
        // Cyclic sort////////
//         int i=0;
//         while(i<nums.size())
//         {
//             if(nums[i] != i+1 && nums[i] != nums[nums[i] - 1])
//                 swap(nums[i],nums[nums[i] - 1]);
//             else
//                 i++;
//         }
        
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i] != i+1)
//                 return {nums[i] , i+1};
                
//         }
        
//         return {};
    }
};

// 0 1 2 3
// 1 2 2 4



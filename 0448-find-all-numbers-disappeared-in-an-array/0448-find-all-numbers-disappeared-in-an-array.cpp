class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>res;
//         unordered_set<int>sett;
//         for(int i=0;i<nums.size();i++)
//         {
//             sett.insert(nums[i]);
//         }
        
//         for(int i=1;i<=nums.size();i++)
//         {
//             if(sett.find(i) == sett.end())
//                 res.push_back(i);
//         }
//         return res;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             nums[abs(nums[i])-1]=-abs(nums[abs(nums[i])-1]);
//         }
//         // for(auto x:nums)
//         //     cout<<x<<" ";
        
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i] > 0)
//                 res.push_back(i+1);
//         }
//         return res;
        
        
        //////////CYCLIC SORT//////////
        
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            if(nums[i] != i+1 && nums[i] != nums[nums[i] - 1])
            {
                swap(nums[i],nums[nums[i] - 1]);
            }
            else
                i++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i] != i+1)
                res.push_back(i+1);
        }
        
        return res;
    }
};
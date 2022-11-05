class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(nums[i] + nums[j] == target)
        //             return {i+1,j+1};
        //     }
        // }
        
        // return {-1,-1};
        
        int i=0,j=n-1;
        
        while(i < j)
        {
            if(nums[i] + nums[j] == target)
                return {i+1,j+1};
            
            else if(nums[i] + nums[j] > target)
                j--;
            else
                i++;
        }
        
        return {-1,-1};
        
    }
};
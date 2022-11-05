class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
//         for(int i=0;i<nums.size();i++)
//         {
//             nums[i]*=nums[i];
//         }
        
//         sort(nums.begin(),nums.end());
        
//         return nums;
        
        int n=nums.size();
        int i=0,j=n-1;
        vector<int>arr;
        while(i<=j)
        {
            if(abs(nums[i]) > abs(nums[j]))
            {
                arr.push_back(nums[i]*nums[i]);
                i++;
            }
            
//             else if(abs(nums[i]) == abs(nums[j]))
//             {
//                 arr.push_back(nums[i]*nums[i]);
//                // arr.push_back(nums[j]*nums[j]);
//                 i++;j--;
//             }
            else
            {
                arr.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};
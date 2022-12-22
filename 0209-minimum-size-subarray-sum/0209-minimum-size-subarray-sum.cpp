class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        int mn=INT_MAX;
//         for(int i=0;i<n;i++)
//         {
//             int sum=0;
//             for(int j=i;j<n;j++)
//             {
//                 sum+=nums[j];
//                 if(sum>=target)
//                 {
//                     mn=min(mn,j-i+1);
//                 }
//             }
//         }
        
//         if(mn==INT_MAX)
//             return 0;
//         return mn;
        
        int i=0,j=0;
        int sum=0;
        while(j<n)
        {
            sum+=nums[j++];
            if(sum>=target)
            {
                mn=min(mn,j-i+1);
                while(sum>=target)
                {
                    sum-=nums[i];
                    i++;
                    mn=min(mn,j-i+1);
                }
            }
            //j++;
        }
        if(mn==INT_MAX)
            return 0;
        return mn;
        
    }
};
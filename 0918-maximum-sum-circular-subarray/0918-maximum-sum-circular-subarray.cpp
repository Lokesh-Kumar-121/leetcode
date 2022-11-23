class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
//         int n=nums.size();
//         int sum=0;
//         int mx=INT_MIN;
//         int res=INT_MIN;
        
//         for(int j=0;j<n;j++)
//         {
//             int i=j;
//             int temp=n-1;
            
//             while(temp--)
//             {
//                  i=i%n;
//                  sum+=nums[i];
//                  mx=max(mx,sum);
//                  if(sum < 0) sum=0;
//                  i++;
            
//             }
            
//             res=max(res,mx);
//             sum=0;
//             mx=INT_MIN;
//         }
        
//         return res;
        
        int n=nums.size();
        int sum=0;
        int mx=INT_MIN;
        int mn=INT_MAX;
        int total=0;
        
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
            sum+=nums[i];
            mx=max(mx,sum);
            if(sum<0)sum=0;
        }
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            mn=min(mn,sum);
            if(sum>0)sum=0;
        }
        
        int z=total-mn;
        if(z==0)
            return mx;
        
        return max(z,mx);
        
        
        
    }
};
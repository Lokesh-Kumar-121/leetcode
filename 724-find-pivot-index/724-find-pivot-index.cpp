class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n=nums.size();
        
        for(int i=1;i<n;i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        
        for(auto x:nums)
            cout<<x<<" ";
        
        int left,right;
        int pivot=-1;
        for(int i=0;i<n;i++)
        {
            (i==0) ? left=0:left=nums[i-1];
            (i==n-1) ? right=0:right=nums[n-1]-nums[i];
            
            if(left==right)
                return i;
        }
        return pivot;
    }
};
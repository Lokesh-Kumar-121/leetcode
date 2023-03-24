class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size();
        if(n == 1)
            return 0;
        
        if(nums[0] > nums[1])
            return 0;
        if(nums[n-1] > nums[n-2])
            return n-1;
        
        int i=0,j=n-1;
        int mid;
        while(i<=j)
        {
            mid = i+(j-i)/2;
            
            if(mid == 0)
            {
                i=mid+1;
                continue;
            }    
            if(mid == n-1)
            {
                j=mid-1;
                continue;
            } 
            
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])
                return mid;
            
            if(nums[mid+1] > nums[mid])
                i=mid+1;
            else
                j=mid-1;
        }
        
        return -1;
    }
};
class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0];
            
        vector<int>arr;
        for(int i=1;i<nums.size();i++)
        {
            arr.push_back(nums[i]);
        }
        int prev=arr[0];
        int prev2=0;
        
        for(int i=1;i<arr.size();i++)
        {
            int take=arr[i];
            if(i>1) take+=prev2;
            int nottake=prev;
            
            int curr=max(take,nottake);
            prev2=prev;
            prev=curr;
        }
        
        int left=prev;
        arr.clear();
        for(int i=0;i<nums.size()-1;i++)
            arr.push_back(nums[i]);
        
        prev=arr[0];
        prev2=0;
        
        for(int i=1;i<arr.size();i++)
        {
            int take=arr[i];
            if(i>1) take+=prev2;
            int nottake=prev;
            
            int curr=max(take,nottake);
            prev2=prev;
            prev=curr;
        }
        
        int right=prev;
        
        return max(left,right);
        
    }
};
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        vector<int>aver(nums.size(),-1);
        if(k*2+1 > nums.size())
            return aver;
        long long sum = 0;
        
        int i,j=0;
        for(i=0;i<k*2+1;i++)
        {
            sum+=nums[i];
        }
        
        int x = k;
        aver[x++] = (sum/(2*k+1));
        
        while(i<nums.size())
        {
            sum-=nums[j++];
            sum+=nums[i++];
            aver[x++] = (sum/(2*k+1));
        }
        
        return aver;
        
    }
};
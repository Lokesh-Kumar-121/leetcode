class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<q.size();i++)
        {
            int sum=0;
            int count=0;
            int pans=0,temp=q[i];
            for(int j=0;j<nums.size();j++)
            {
                
                if(sum == q[i])
                {
                    pans = max(pans,count);
                    count=0;
                }
                if(nums[j] <= temp)
                {
                    sum+=nums[j];
                    temp-=nums[j];
                    count++;
                }
                       
            }
            q[i]=max(pans,count);
        }
        
        return q;
    }
};
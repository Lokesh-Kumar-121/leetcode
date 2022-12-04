class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        vector<long long int>pre;
        long long int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            pre.push_back(sum);
        }
        
        for(auto x:pre)
            cout<<x<<" ";
        cout<<endl;
        int res=INT_MAX;
        int ind;
        // int n=pre.size();
        // n--;
        for(int i=0;i<pre.size();i++)
        {
            long long int diff;
            if(i == pre.size()-1)
                diff=(pre[i]/(i+1));
            else
                diff=((pre[i]/(i+1)) - ((pre[pre.size()-1] - pre[i])/(pre.size()-(i+1))));
            
            diff=abs(diff);
            if(diff < res)
            {
                res=diff;
                ind=i;
            }
        }
        
        return ind;
        
    }
};
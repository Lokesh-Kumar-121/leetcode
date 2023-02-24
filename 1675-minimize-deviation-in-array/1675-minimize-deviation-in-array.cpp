class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> pq;
        int mini=INT_MAX;
        for(int it:nums)
        {
            if(it%2==1)
                it*=2;
            mini=min(it,mini);
            pq.push(it);
        }
       
        int diff=INT_MAX;
        while(pq.top()%2==0)
        {
            int t=pq.top();
            pq.pop();
            diff=min(diff,t-mini);
            mini=min(mini,t/2);
            pq.push(t/2);
        }
        
        return min(diff,pq.top()-mini);
    }
};
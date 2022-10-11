class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int min=prices[0];
        int mx=INT_MIN;
        
        for(int i=1;i<n;i++)
        {
            
            mx=max(mx,prices[i]-min);
            if(prices[i] < min)
            {
                min=prices[i];
            }
        }
        
        if(mx<0)
            return 0;
        
        return mx;
    }
};
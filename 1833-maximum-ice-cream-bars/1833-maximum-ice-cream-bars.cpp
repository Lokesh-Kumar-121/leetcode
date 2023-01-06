class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        int count=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++)
        {
            if(costs[i] <= coins)
            {
                count++;
                coins-=costs[i];
                if(coins==0)
                    break;
            }
        }
        return count;
    }
};
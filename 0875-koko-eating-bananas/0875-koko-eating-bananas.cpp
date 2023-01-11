class Solution {
public:
    
    int calculate(int k,vector<int>&piles)
    {
        int hour=0;
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i] % k == 0)
            {
                hour+=piles[i]/k;
            }
            else
            {
                hour+=piles[i]/k;
                hour+=1;
            }
        }
        
        return hour;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        
        int mid;
        while(left <= right)
        {
            mid=left+(right-left)/2;
            
            if(calculate(mid,piles) > h)
            {
                left=mid+1;
            }
            
            else
            {
                if(mid==1 || calculate(mid-1,piles) > h)
                {
                    return mid;
                }
                
                right=mid-1;
            }
        }
        return -1;
    }
};
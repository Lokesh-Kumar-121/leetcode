class Solution {
public:
    int climbStairs(int n) {
        
        int x=1,y=1;
        if(n==1)
            return 1;
        
        int total;
        for(int i=1;i<n;i++)
        {
            total=x+y;
            x=y;y=total;
        }
        
        return total;
            
    }
};
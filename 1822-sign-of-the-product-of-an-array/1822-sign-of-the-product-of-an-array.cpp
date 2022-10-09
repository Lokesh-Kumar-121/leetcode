
class Solution {
public:
    
    int arraySign(vector<int>& nums) {
        
       int zero=0;
       int neg=0;
        
        for(auto x:nums)
        {
            if(x==0) {
                zero=1;
                break;
            }
            else if(x<0)
                neg++;
        }
        
        if(zero==1)
            return 0;
        else if(neg&1)
            return -1;
        else
            return 1;
    }
};
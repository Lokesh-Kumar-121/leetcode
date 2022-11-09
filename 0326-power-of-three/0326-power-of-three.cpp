class Solution {
public:
    bool isPowerOfThree(int x) {
        
        //int x=n;
        if(x <= 0)
            return false;
        while(x % 3 == 0)
        {
            //cout<<x<<endl;
            x/=3;
        }
        
        if(x==1)
            return true;
        else return false;
    }
};
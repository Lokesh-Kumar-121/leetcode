class Solution {
public:
    
    int func(int num)
    {
        int xx=0;
        while(num>0)
        {
            xx += (num%10);
            num /= 10;
        }
        
        return xx;
    }
    int addDigits(int num) {
        
        while(num > 9)
        {
            num = func(num);
        }
        
        return num;
    }
};
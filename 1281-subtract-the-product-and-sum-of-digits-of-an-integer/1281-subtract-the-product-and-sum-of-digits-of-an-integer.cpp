class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;
        int sum=0;
        
        while(n!=0)
        {
            int ele=n%10;
            pro*=ele;
            sum+=ele;
            n/=10;
        }
        
        return pro-sum;
    }
};
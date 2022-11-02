class Solution {
public:
    int hammingWeight(uint32_t n) {
       // int count=0;
       // while(n!=0)
       // {
       //     if(n&1)
       //         count++;
       //     n=n/2;
       //    // n<<1;
       // }
       //  return count;
        
        int count=__builtin_popcount(n);
        return count;
    }
};
// class Solution {
// public:
    
// //     void func(int ind,int n,
// //               int&count,vector<int>&ds,unordered_map<int,int>&even,unordered_map<int,int>prime)
// //     {
// //         if(ind >= n)
// //         {
// //             count++;
// //             count=count%1000000007;
// //             return;
// //         }
// //         if(ind&1)
// //         {
// //             for(auto x:prime)
// //             {
// //                 if(x.second == 0)
// //                 {
// //                     ds.push_back(x.first);
// //                     //prime[x.first]=1;
// //                     func(ind+1,n,count,ds,even,prime);
// //                     ds.pop_back();
// //                     //prime[x.first]=0;
// //                 }
// //             }
// //         }
// //         else
// //         {
// //             for(auto x:even)
// //             {
// //                 if(x.second == 0)
// //                 {
// //                     ds.push_back(x.first);
// //                     //even[x.first]=1;
// //                     func(ind+1,n,count,ds,even,prime);
// //                     ds.push_back(x.first);
// //                     //even[x.first]=0;
// //                 }
// //             }
// //         }
        
// //     }
//     int countGoodNumbers(long long n) {
//         long long int count=1;
// //         unordered_map<int,int>even;
// //         unordered_map<int,int>prime;
// //         for(int i=0;i<=9;i+=2)
// //         {
// //             even[i]=0;
// //         }
// //         prime[2]=0;
// //         prime[3]=0;
// //         prime[5]=0;
// //         prime[7]=0;
        
// //         //n--;
// //         vector<int>ds;
// //         func(0,n,count,ds,even,prime);
//         int mod=1000000007;
// //         if(n&1)
// //         {
// //             count=pow(4,n/2);
// //             //int odd=(pow(4,n/2))%mod;
// //             //odd=odd%1000000007;
// //             // count=odd;
// //             // count=count%1000000007;
// //             count*=pow(5,n-(n/2));
// //             //even=even%1000000007;
// //             // count+=even;
// //             // count=count%1000000007;
            
// //         }
// //         else
// //         {
// //             n=n/2;
// //             count=pow(5,n);
// //             //even=even%1000000007;
// //             // count=even;
// //             // count=count%1000000007;
// //             count*=pow(4,n);
// //             //odd=odd%1000000007;
// //             // count+=odd;
// //             // count=count%1000000007;
            
// //         }
//         for(int i=0;i<n;i++)
//         {
//             if(i&1)
//             {
//                 count*=4%mod;
//                 count%=mod;
//             }
//             else
//             {
//                 count*=5%mod;
//                 count%=mod;
//             }
//         }
            
//          count=count%mod;
//         return (int)count;
//     }
// };

class Solution {
public:
    int n1=1e9+7;
    long long binpow(long long a, long long b) {
        long long res = 1;
        while (b > 0) {
            if (b & 1)
                res = res * a%n1;
            a = a * a%n1;
            b >>= 1;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long a = n/2+n%2;
        long long b = n/2;
        long long sum = binpow(5,a);
        long long sum2 = binpow(4,b);
        int sum3= (sum2 * sum)%n1;
        return sum3;
    }
};
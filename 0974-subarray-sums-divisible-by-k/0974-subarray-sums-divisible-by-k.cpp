// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {
        
//         int sum=0,count=0;
//         unordered_map<int,int>m;
//         m[0]++;
//         for(int i=0;i<nums.size();i++)
//         {
//             sum+=nums[i];
//             int ff=abs(sum)%k;
//             if(m.find(ff) != m.end())
//             {
//                 count+=m[ff];
//             }
//             m[sum]++;
//             m[nums[i]]++;
//         }
//         return count;
//     }
// };
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
         vector<int> mp(k,0);
         mp[0]=1;
        int ans=0,sum=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans=ans+mp[(sum%k+k)%k];
            mp[(sum%k+k)%k]++;
        }
        return ans;
    }
};
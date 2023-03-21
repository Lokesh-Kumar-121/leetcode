class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int ans=0;
        long long int a=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                a+=1;
            }
            else{
                a=0;
            }
            
            ans+=a;
        }
        return ans;
    }
};
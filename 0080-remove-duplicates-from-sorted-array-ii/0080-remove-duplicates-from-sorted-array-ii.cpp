class Solution {
public:
    
    void rightR(vector<int>&nums,int i)
    {
        reverse(nums.begin()+i+1,nums.end());
        reverse(nums.begin()+i,nums.end());
    }
    
    int removeDuplicates(vector<int>& nums) {
        
        nums.push_back(10e4+1);
        int k=0;
        int count=1;
        int zz=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            
            if(nums[i] < zz)
                break;
            if(nums[i] == nums[i-1])
                count++;
            else{
                count=1;
                zz=nums[i];
            }
            k++;
            if(count == 3)
            {
                k--;
                rightR(nums,i);
                count=2;
                i--;
            }
        }
        
//         cout<<k<<endl;
//         for(auto x:nums)
//             cout<<x<<" ";
//         cout<<endl;
        
//         return 0;
        return k;
        
    }
};



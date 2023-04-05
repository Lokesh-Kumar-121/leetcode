// class Solution {
// public:
//     int minimizeArrayValue(vector<int>& nums) {
        
//         for(int i=nums.size()-1;i>0;i--)
//         {
//             while(nums[i-1] < nums[i])
//             {    nums[i]--;
//                 nums[i-1]++;
//             }
//         }
        
//         return *max_element(nums.begin(),nums.end());
//     }
// };

    
// 7 8 5 10 10
    
// 8 8 8 8 8


class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int mx = nums[0];
       unsigned long int tot=0;
        int ort=0;
        for(int i=1; i<nums.size();i++)
        {   
            if( (nums[i])>mx)
            {
                int resi = nums[i]-mx;
                
                if(tot>=resi)
                {
                    tot -= resi;
                    continue;
                }
                resi = resi - tot;
                tot = 0;
                
                mx = int(resi/(i+1))>0 ? (mx+resi/(i+1)) : (mx);
                if((resi%(i+1))!=0)
                {
                    tot = i+1 - resi%(i+1);
                    ++mx;
                }
                

            }
            else
            {
                tot += mx-nums[i];
            }
        }
        return mx;
    }
};
    
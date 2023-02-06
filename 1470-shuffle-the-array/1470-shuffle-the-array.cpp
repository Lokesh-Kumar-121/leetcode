class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
//         int i=1,j=n;
//         while(i < j and j < (2*n))
//         {
//             swap(nums[i],nums[j]);
//             i++;
//             //cout << i <<" "<< j <<"\n";
//             swap(nums[i],nums[j]);
//             j++;i++;
//         }
        
//         return nums;
        vector<int>res;
        int i=0,j=n;
        while(j<2*n)
        {
            res.push_back(nums[i++]);
            res.push_back(nums[j++]);
        }
        
        return res;
    }
};

// 2 3 1 5 4 7
//2 3 5 1 4 7
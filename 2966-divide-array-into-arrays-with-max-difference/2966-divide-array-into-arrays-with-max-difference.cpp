class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i+=3){
            vector<int> arr;
            arr.push_back(nums[i]);
                if(nums[i+1]- nums[i]> k ) return {};
                else arr.push_back(nums[i+1]);
                
            if((nums[i+2]- nums[i+1]> k)  || (nums[i+2] - nums[i])>k ) return {};
                else arr.push_back(nums[i+2]);
            v.push_back(arr);
        }
        
        return v;
    }
};
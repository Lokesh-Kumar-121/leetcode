class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=i;
        }
        int i=0;
        int index;
        for(i=0;i<nums.size();i++)
        {
            auto it=m.find(target-nums[i]);
               if(it != m.end()) {
                    index=(it->second);
                   if(index==i)
                    continue;
                    break; }
        }
        
        return{i,index};
        
    }
};
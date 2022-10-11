class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>arr;
        for(int i=0;i<nums2.size();i++)
        {
            int flag=0;
            for(int j=i+1;j<nums2.size();j++)
            {
                if(nums2[j] > nums2[i])
                {
                    arr.push_back(nums2[j]);
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                arr.push_back(-1);
            }
        }
        
        unordered_map<int,int>m;
        
        for(int i=0;i<nums2.size();i++)
        {
            m[nums2[i]]=arr[i];
        }
        
        // for(auto x:m)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        
        
        vector<int>res;
        for(auto x:nums1)
        {
            auto it=m.find(x);
            res.push_back(it->second);
        }
        
        
        return res;
    }
};
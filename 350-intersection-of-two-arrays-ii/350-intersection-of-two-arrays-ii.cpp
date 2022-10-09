class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int n1=nums1.size();
        int n2=nums2.size();
        
        for(int i=1;i<n1;i++)
        {
            if(nums1[i] != nums1[i-1])
                 sort(nums1.begin(),nums1.end());
        }
        
        for(int i=1;i<n2;i++)
        {
            if(nums2[i] != nums2[i-1])
                 sort(nums2.begin(),nums2.end());
        }
        
        //sort(nums1.begin(),nums1.end());
        //sort(nums2.begin(),nums2.end());
        
        vector<int>arr;
        // if(n1==0 || n2==0)
        //     return arr;
        
        int i=0,j=0,k=0;
        
        while(i<n1 && j<n2)
        {
            if((i<n1 && j<n2) && nums1[i] < nums2[j]){i++;}
            if((i<n1 && j<n2) && nums2[j] < nums1[i]){j++;}
            if((i<n1 && j<n2) && nums1[i] == nums2[j]){arr.push_back(nums1[i]);i++;j++;}
        }
        
        return arr;
    }
};






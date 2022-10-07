class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=0,j=0;
        vector<int>arr;
        while(i<m &&j<n)
        {
            if(nums1[i] <= nums2[j]){arr.push_back(nums1[i]);i++;}
            if(nums1[i] > nums2[j]){arr.push_back(nums2[j]);j++;}
        }
        
        while(i<m)
        {
            arr.push_back(nums1[i]);
            i++;
        }
        
        while(j<n)
        {
            arr.push_back(nums2[j]);
            j++;
        }
        
        // for(auto x: arr)
        //     cout<<x<<" ";
        for(int i=0;i<arr.size();i++)
        {
            nums1[i]=arr[i];
        }
        //return arr;
    }
};
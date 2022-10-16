class Solution {
public:
    
    static bool cmp(const pair<int,int> &a, const pair<int,int> &b)
    {
        if(a.second==b.second)
            return (a.first < b.first);
        
        return (a.second < b.second);
    }
    
    int convert_binary(int n)
    {
    vector<int>arr;
    while(n >= 1)
    {
        arr.push_back(n%2);
        n/=2;
    }

    reverse(arr.begin(),arr.end());

    //return arr;
        int count=0;
        for(auto x:arr)
        {
            if(x==1)
                count++;
        }
        
        return count;


    }
    
   
    
    
    vector<int> sortByBits(vector<int>& arr) {
     
        //sort(arr.begin(),arr.end());
        
        vector<pair<int,int>>nums;
        
        for(int i=0;i<arr.size();i++)
        {
            int ele=convert_binary(arr[i]);
            nums.push_back(make_pair(arr[i],ele));
        }
        
        // for(auto x:nums)
        // {
        //     cout<<nums.first<<" "<<nums.second<<endl;
        // }
        // for(int i=0;i<nums.size();i++)
        // {
        //     cout<<nums[i].first<<" "<<nums[i].second<<endl;
        // }
        
        sort(nums.begin(),nums.end(), cmp);
        
        //  for(int i=0;i<nums.size();i++)
        // {
        //     cout<<nums[i].first<<" "<<nums[i].second<<endl;
        // }
        
        for(int i=0;i<nums.size();i++)
        {
            arr[i]=nums[i].first;
        }
        
        return arr;
    }
};
class Solution {
public:
    
    static bool cmp(int &a,int &b)
    {
        string n1=to_string(a);
        string n2=to_string(b);
        string s1=n1+n2;
        string s2=n2+n1;
        
        return s1>s2;
    }
    
    string largestNumber(vector<int>& nums) {
        string res="";
        
        
        sort(nums.begin(),nums.end(),cmp);
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
                count++;
            res+=to_string(nums[i]);
        }
        
        if(count==nums.size())
            return "0";
        // int num=stoi(res);
        // if(num==0)
        //     return 0;
//         for(int i=0;i<res.length();i++)
//         {
//             if(res[i] == '0')
//                 count++;
//         }
        
//         if(count == nums.size())
//             return "0";
        
        return res;
    }
};
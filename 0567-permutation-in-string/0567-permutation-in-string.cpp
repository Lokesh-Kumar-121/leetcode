class Solution {
public:
    
    bool cmphash(int arr1[] , int arr2[] )
    {
        // int n=sizeof(arr1)/sizeof(arr1[0]);
        for(int i=0;i<26;i++)
        {
             if(arr1[i] != arr2[i])
                 return false;
        }
        
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        
//         unordered_set<char>sett;
//         for(auto x:s1)
//         {
//             sett.insert(x);
//         }
        
//         int count=0;
        
//         for(int i=0;i<s2.length();i++)
//         {
//             if(sett.find(s2[i]) == sett.end())
//                 count=0;
            
//             else
//                 count++;
            
//             if(count==s1.length())
//                 return true;
//         }
        
//         return false;
        
        int arr1[26]={};
        int arr2[26]={};
        
        int n1=s1.length();
        int n2=s2.length();
        
        if(n1>n2)
            return false;
        
        for(auto x:s1)
        {
            arr1[x-'a']++;
        }
        //cout<<n1<<endl;
        
        for(int i=0;i<n1;i++)
        {
            arr2[s2[i]-'a']++;
        }
        
        //cout<<cmphash(arr1,arr2,n1);
        // for(auto x:arr1)
        //     cout<<x<<" ";
        // cout<<endl;
        // for(auto x:arr2)
        //     cout<<x<<" ";
        
        int i=0,j=n1;
        
        while(j<n2)
        {
            if(cmphash(arr1,arr2))
                return true;
            
            arr2[s2[i] - 'a']--;
            i++;
            arr2[s2[j++] - 'a']++;
            
        }
        if(cmphash(arr1,arr2))
                return true;
        
        return false;
        
        
        
        
        
    }
};
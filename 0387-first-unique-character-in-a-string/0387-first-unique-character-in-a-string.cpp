class Solution {
public:
    int firstUniqChar(string s) {
        
      unordered_map<char,int>m;
        
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]=i;
        }
        
        // for(auto x:m)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        
        unordered_map<char,int>m2;
        for(auto x:s)
        {
            m2[x]++;
        }
        int mn=INT_MAX;
        int ind;
        int flag=0;
        for(auto x:m2)
        {
            if(x.second==1)
            {
                flag=1;
                auto it=m.find(x.first);
                ind=it->second;
                mn=min(mn,ind);
                
            }
        }
        if(flag==0)
            return -1;
        
        return mn;
    }
};
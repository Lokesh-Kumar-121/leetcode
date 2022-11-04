class Solution {
public:
    bool isIsomorphic(string s, string t) {
       
        if(s.size() != t.size())
            return false;
        
        int n=s.size();
        
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        
        for(int i=0;i<s.size();i++)
        {
            m1[s[i]]=i;
        }
        
        for(int i=0;i<s.size();i++)
        {
            m2[t[i]]=i;
        }
        
        // if(m1.size() != m2.size())
        //     return false;
        
        for(int i=0;i<n;i++)
        {
            if(m1[s[i]] != m2[t[i]])
                return false;
        }
        
        return true;
        
    }
};
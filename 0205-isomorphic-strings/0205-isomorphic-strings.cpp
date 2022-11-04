class Solution {
public:
    bool isIsomorphic(string s, string t) {
       
        if(s.size() != t.size())
            return false;
        
        int n=s.size();
        
        unordered_map<char,char>m;
        unordered_set<char>sett;
        
        for(int i=0;i<n;i++)
        {
            if(m.find(s[i]) == m.end())
            {
                if(sett.find(t[i]) == sett.end())
                {
                    m[s[i]]=t[i];
                    sett.insert(t[i]);
                }
                else
                    return false;
            }
            else
            {
                if(m[s[i]] != t[i])
                    return false;
            }
            
        }
        
        
        return true;
    }
};



//             if(m.find(s[i]) == m.end())
//             {
                
//                 if(sett.find(t[i]) == sett.end())
//                    m[s[i]]=t[i];
                
//                 else
//                     return false;
//             }
//             else
//             {
//                 if(m[s[i]] != t[i])
//                     return false;
//             }
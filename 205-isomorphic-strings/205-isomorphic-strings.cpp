class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // unordered_map<char,int>s1;
        // unordered_map<char,int>s2;
        
        if(s.size() != t.size()) return false;
        
             map<char,int>s1;
             map<char,int>s2;
             //vector<int>arr1;
             //vector<int>arr2;
            
            
              for(int i=0;i<s.size();i++){
                  s1[s[i]]=i+1;
                  s2[t[i]]=i+1;
              }
//             for(auto x:s1)
//                 arr1.push_back(x.second);
//             for(auto x:s2)
//                 arr2.push_back(x.second);
            
            for(int i=0;i<s.size();i++)
            {
                if(s1[s[i]] != s2[t[i]])
                    return false;
            }
            return true;
            
        
        
    }
};
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        
        for(auto x:ransomNote)
        {
            m[x]++;
        }
        for(auto x:magazine)
        {
            m[x]--;
        }
        
        for(auto x:m)
        {
            if(x.second > 0)
            {
                return false;
                
            }
        }
        return true;
    }
};
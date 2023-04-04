class Solution {
public:
    int partitionString(string s) {
        
        unordered_set<char>sett;
        int count=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(sett.find(s[i]) == sett.end())
                sett.insert(s[i]);
            else
            {
                count++;
                sett.clear();
                sett.insert(s[i]);
            }
        }
        
        return count+1;
        
    }
};
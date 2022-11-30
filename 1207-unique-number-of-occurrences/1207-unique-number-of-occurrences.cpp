class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        
        unordered_set<int>sett;
        
        for(auto x:m)
        {
            if(sett.find(x.second) != sett.end())
                return false;
            else
                sett.insert(x.second);
        }
        
        return true;
    }
};
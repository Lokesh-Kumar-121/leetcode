class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_map<char , unordered_set<string>>mp;
        for(auto &s : ideas)
            mp[s[0]].insert(s.substr(1 , s.size() - 1));
        long long ans = 0 ;
        unordered_set<char>vis;
        for(auto&[key , st]:mp)
        {
            vis.insert(key);
            for(auto&[key2 , st2]:mp)
            {
                
                int commonCounter = 0;
                if(key == key2 || vis.count(key2))
                    continue;
                for(auto &s :st)
                {
                    if(st2.find(s) != st2.end())
                        commonCounter+=1;
                }       
                ans+= 2 * (st.size() - commonCounter) *  (st2.size() - commonCounter);
            }
        }
        return ans;
    }
};
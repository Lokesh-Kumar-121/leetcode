class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        // int freq=0;
        vector<pair<int,char>> v;
        for(auto &[key,value] : m){
            // pair<int,char> p;
            // p.
            v.push_back({value, key});
        }
        
        sort(v.rbegin(),v.rend());
        string ans="";
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].first;j++){
                ans+=v[i].second;
            }            
        }
        
        return ans;
    }
};

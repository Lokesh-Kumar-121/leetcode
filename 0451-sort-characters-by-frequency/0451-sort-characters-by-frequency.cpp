class Solution {
public:
    
    static bool cmp(const pair<char,int>&a, const pair<char,int>&b)
    {
        return a.second > b.second;
    }
    
    string frequencySort(string s) {
        
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        
        vector<pair<char,int>>arr;
        for(auto x:m)
        {
            arr.push_back(make_pair(x.first,x.second));
        }
        
        sort(arr.begin(),arr.end(),cmp);
        string res="";
        for(auto x:arr)
        {
            for(int i=0;i<x.second;i++)
            {
                res+=x.first;
            }
        }
        
        return res;
    }
};
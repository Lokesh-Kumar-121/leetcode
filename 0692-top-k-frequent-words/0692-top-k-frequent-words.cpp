class Solution {
public:
    
    static bool cmp(const pair<string,int>&a,const pair<string,int>&b)
    {
        if(a.second == b.second)
            return(a.first < b.first);
        
        return(a.second > b.second);
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        
        for(auto x:words)
        {
            m[x]++;
        }
        
        // for(auto x:m)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        
        vector<pair<string,int>>arr;
        
        for(auto x:m)
        {
           arr.push_back(make_pair(x.first,x.second));
        }
        
        sort(arr.begin(),arr.end(),cmp);
        
        for(auto x:arr)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        
        words.clear();
        for(int i=0;i<k;i++)
        {
            words.push_back(arr[i].first);
        }
        
        return words;
    }
};
class Solution {
public:
    bool wordPattern(string p, string s) {
        
        vector<string>arr;
        string temp="";
        for(int i=0;i<=s.length();i++)
        {
            
            if(s[i] == ' ' || i == s.length())
            {
                arr.push_back(temp);
                temp="";
            }
            else
                temp+=s[i];
        }
        if(p.length() != arr.size())
            return false;
        
        // for(auto x:arr)
        //     cout<<x<<" ";
        // cout<<endl;
        unordered_map<char,string>m;
        unordered_set<string>sett;
        for(int i=0;i<p.length();i++)
        {
            if(m.find(p[i]) == m.end())
            {
                if(sett.find(arr[i]) == sett.end())
                {
                     m[p[i]]=arr[i];
                    sett.insert(arr[i]);
                }
                    
                else
                    return false;
            }
            else
            {
                if(m[p[i]] != arr[i])
                    return false;
            }
        }
        
        return true;
    }
};
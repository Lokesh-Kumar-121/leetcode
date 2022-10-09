class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        int n=s1.size();
        if(s1==s2)
            return true;
        
        unordered_map<char,int>m;
        for(int i=0;i<n;i++)
        {
            m[s1[i]]++;
            m[s2[i]]--;
        }
        
        //cout<<m.size()<<endl;
        
        for(auto x:m)
        {
            if(x.second != 0)
                return false;
            
        }
        
        
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i] != s2[i])
            {
                count++;
                // if(count>2)
                //     break;
            }
        }
        if(count==0 || count==2)
            return true;
        else return false;
        
    }
};
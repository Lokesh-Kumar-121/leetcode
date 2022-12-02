class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        int n1=word1.length();
        int n2=word2.length();
        if(n1!=n2)
            return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        //unordered_set<char>s1;
        //unordered_set<char>s2;
        string s1="",s2="";
        
        for(int i=0;i<n1;i++)
        {
            //s1.insert(word1[i]);
            m1[word1[i]]++;
        }
        for(int i=0;i<n2;i++)
        {
            //s2.insert(word2[i]);
            m2[word2[i]]++;
        }
        vector<int>v1,v2;
        
        for(auto x:m1){
            v1.push_back(x.second);
            s1+=x.first;
        }
        for(auto x:m2){
            v2.push_back(x.second);
            s2+=x.first;
        }
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        
        return (v1==v2 && s1==s2);
        
        
    }
};
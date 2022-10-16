class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26]={};
        
        for(int i=0;i<t.size();i++)
        {
            int num=t[i]-97;
            arr[num]++;
        }
        for(int i=0;i<s.size();i++)
        {
            int num=s[i]-97;
            arr[num]--;
        }
        int res;
        for(int i=0;i<26;i++)
        {
            if(arr[i]==1)
                res=i+97;
        }
        
        return res;
    }
};
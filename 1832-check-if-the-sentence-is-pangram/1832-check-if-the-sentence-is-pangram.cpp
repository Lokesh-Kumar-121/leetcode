class Solution {
public:
    bool checkIfPangram(string str) {
        int arr[26]={};
        for(int i=0;i<str.length();i++)
        {
            int num=str[i]-'a';
            arr[str[i]-'a']++;
        }
        
        for(auto x:arr)
        {
            if(x==0)
                return false;
        }
        
        return true;
    }
};
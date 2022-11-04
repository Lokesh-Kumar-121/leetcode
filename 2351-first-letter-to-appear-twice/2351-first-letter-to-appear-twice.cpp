class Solution {
public:
    char repeatedCharacter(string s) {
        
        int arr[26]={};
        char res;
        for(int i=0;i<s.length();i++)
        {
            //cout<<s[i]<<" "<<s[i]-'a';
            if(arr[s[i]-'a'] == 1){
                 res=s[i];
                 break;
            }
               
            else
                arr[s[i]-'a']++;
        }
        return res;
    }
};
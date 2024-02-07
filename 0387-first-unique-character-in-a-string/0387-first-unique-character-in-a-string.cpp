class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            int ind = s[i]- 'a';
            arr[ind]++;
        }
        
        for(int i=0;i<s.length();i++){
            if( arr[s[i] - 'a'] ==1) return i;
        }
        
        return -1;
    }
};
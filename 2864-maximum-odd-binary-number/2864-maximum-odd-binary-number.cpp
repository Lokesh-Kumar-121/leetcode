class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        for(int i= 0;i<s.length();i++){
            if(s[i]=='1') count++;
        }
        for(int i=0;i<s.length();i++){
            if(count>1 || (i==s.length()-1)){
                 s[i]='1';
                count--;
            }
            else s[i]='0';
        }
        return s;
    }
};
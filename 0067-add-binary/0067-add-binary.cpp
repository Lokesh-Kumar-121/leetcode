class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int i=a.length()-1;
        int j=b.length()-1;
        int c=0;
        while(c||i>=0||j>=0){
            if(i>=0){
                c+=a[i]-'0';
                i--;
            }
            if(j>=0){
                c+=b[j]-'0';
                j--;
            }
            s+=(c%2+'0');
            c=c/2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
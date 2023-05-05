class Solution {
public:
    int maxVowels(string s, int k) {
        
        // int mx = INT_MIN;
        int count = 0;
        
        for(int i=0;i<k;i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                count++;
        }
        
        int mx = count;
        // cout<<mx<<endl;
        int i=0,j=k;
        
        while(j<s.length())
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                count--;
            i++;
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                count++;
            j++;
            
            mx = max(mx,count);
            // cout<<mx<<endl;
        }
        
        return mx;
    }
};
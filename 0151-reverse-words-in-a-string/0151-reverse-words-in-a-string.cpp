class Solution {
public:
    string reverseWords(string s) {
        
        vector<string>arr;
        int n=s.length();
        
       int k=n-1;
        while(s[k] == ' '){
            s.pop_back();
            k--;
        }
        
        int i=0,j;
        
        while(i<n)
        {
            while(i<n && s[i] == ' ')
                i++;
            
            
            j=i+1;
            
            while(j<n && s[j] != ' ')
                j++;
            
           
            arr.push_back(s.substr(i,j-i));
            
            i=j+1;
            
            
        }
        
        
        string res="";
        for(int i=arr.size()-1;i>=1;i--)
        {
            res+=arr[i];
            res+=' ';
        }
        res+=arr[0];
        
        return res;
    }
};
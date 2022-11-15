class Solution {
public:
    
    bool isBad(int arr[])
    {
        for(int i=0;i<256;i++)
        {
            if(arr[i] >1)
                return true;
        }
        
        return false;
    }
    
    int lengthOfLongestSubstring(string s) {
        
        if(!s.length())
            return 0;
        
        int arr[256]={};
        int n=s.length();
        int i=0,j=i+1;
        
        int mx=1;
        int count=1;
        
        arr[s[i] ]++;
        
        while(j < n)
        {
            while(j < n && !isBad(arr))
            {
                arr[s[j] ]++;
             mx=max(mx,count);
                count++;
                j++;
               // mx=max(mx,count);
            }
          
            
            while(isBad(arr))
            {
                arr[s[i] ]--;
                count--;
                i++;
            }
            
            mx=max(mx,count);
        }
        
        return mx;
    }
};
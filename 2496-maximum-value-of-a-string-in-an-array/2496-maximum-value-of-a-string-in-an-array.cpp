class Solution {
public:
    
    int max(int a,int b)
    {
        if(a>b)
            return a;
        
        return b;
    }
    
    int maximumValue(vector<string>& arr) {
        
        int mx=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            string s=arr[i];
            int flag=0;
            for(auto x:s)
            {
                if(isalpha(x))
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                mx=max(mx,stoi(s));
            }
            else
                mx=max(mx,s.length());
        }
        return mx;
        
    }
};
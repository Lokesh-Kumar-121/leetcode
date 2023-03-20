class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        int c=0;
        if(a.size()==1 && (n==1||n==0) && a[0]==0)
        return true;
        if(n>a.size())
        return false;
        for(int i=0;i<a.size();i++)
        {
            if(i==0)
            {
                if(a[i]==0 && a[i+1]==0)
                {
                    a[i]=1;
                    c++;
                }
                else
                continue;
            }
            else if(i==a.size()-1)
            {
                if(a[i]==0 && a[i-1]==0)
                {
                    a[i]=1;
                    c++;
                }
            }
            else
            {
                if(a[i]==0 && a[i+1]==0 && a[i-1]==0)
                {
                    a[i]=1;
                    c++;
                }
            }
        }
        if(c>=n)
        return true;
        else
        return false;
    }
};
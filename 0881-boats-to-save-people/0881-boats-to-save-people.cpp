class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        
        int count=0;
        sort(p.begin(),p.end());
        int i=0,j=p.size()-1;
        while(i<=j)
        {
            if(i==j)
            {
                count++;
                i++;j--;
                continue;
            }
            if(p[j] == limit)
            {
                count++;
                j--;
                continue;
            }
            if(p[i]+p[j] <= limit)
            {
                count++;
                i++;j--;
                continue;
            }
            if(p[i]+p[j] > limit)
            {
                count++;
                j--;
                continue;
            }
            
        }
        return count;
    }
};
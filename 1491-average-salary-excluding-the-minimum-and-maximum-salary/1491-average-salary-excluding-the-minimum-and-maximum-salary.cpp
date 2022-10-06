class Solution {
public:
    double average(vector<int>& salary) {
        //double=low,high;
        int mx=INT_MIN,mn=INT_MAX;
        double sum=0;
        for(auto x: salary)
        {
            mn=min(mn,x);
            mx=max(mx,x);
        }
        
        for(auto x: salary)
        {
            if(x==mn || x==mx)
                continue;
            else
                sum+=x;
        }
        
        double d=salary.size()-2;
        
        return sum/d;
    }
};
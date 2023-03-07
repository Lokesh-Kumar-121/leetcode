class Solution {

public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        
         long long x= time[0],y = totalTrips;   
        long long l=1,r= x*y,mid;

        while(l<=r)
        {
             mid = (l+r)>>1;

            long long sum=0;
            for(auto x : time)
                    sum+=(mid)/x;

            if(sum>=totalTrips)
             r = mid-1;

            else l=mid+1;

        }

        return l;
        

        
    }
};
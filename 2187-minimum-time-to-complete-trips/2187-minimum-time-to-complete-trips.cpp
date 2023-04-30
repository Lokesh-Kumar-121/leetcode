class Solution {
public:
    
    long long help(long long mid , vector<int>&time)
    {
        long long trips = 0;
        for(int i=0;i<time.size();i++)
        {
            trips += mid/time[i];
        }
        
        return trips;
        
    }
    
    long long minimumTime(vector<int>& time, int totalTrips) {
        
        if(time.size() == 1)
            return totalTrips*1ll*time[0];
        
        long long left = *min_element(time.begin(),time.end());
        // long long right = *max_element(time.begin(),time.end());
        long long right = left*totalTrips;
        
        while(left <= right)
        {
            long long mid = left+(right-left)/2;
            
            if(help(mid,time) < totalTrips)
            {
                left = mid+1;
            }
            else
            {
                if(mid == right || help(mid-1,time) < totalTrips)
                {
                    return mid;
                }
                
                right = mid-1;
            }
        }
        
        return -1;
        
    }
};

// 1 2 3 4 5 6 7 8 9

// 100000 .... 1000000000000


    

    
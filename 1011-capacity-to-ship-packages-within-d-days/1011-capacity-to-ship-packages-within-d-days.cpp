class Solution {
public:
    
    int check(int capa,vector<int>&arr,int days)
    {
//         double sum=accumulate(arr.begin(),arr.end(),0ll);
//         if(sum/capa <= days)
//             return true;
        
//         return false;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(capa<arr[i])
                return false;
            sum+=arr[i];
            if(sum>capa)
            {
                days--;
                sum=0;
                if(days<=0)
                    return false;
                sum+=arr[i];
            }
            if(days<=0)
                return false;
        }
        
        return true;
       
        
    }
    
    
    int shipWithinDays(vector<int>& arr, int days) {
        
        int left=1;
        int right=accumulate(arr.begin(),arr.end(),0ll);
        
        int mid;
        while(left<=right)
        {
            mid=(right+left)/2;
            
            if(check(mid,arr,days))
            {
                right=mid-1;
            }
            else
            {
                if(check(mid+1,arr,days))
                {
                    return mid+1;
                }
                
                left=mid+1;
            }
        }
        
        return -1;
    }
};
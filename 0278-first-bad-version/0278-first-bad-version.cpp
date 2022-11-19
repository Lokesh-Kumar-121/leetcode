// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
//         int i;
//         for(i=1;i<=n;i++)
//         {
//             if(isBadVersion(i) == true)
//                 break;
//         }
        
//         return i;
        
        int left=1,right=n;
        int mid,res=-1;
        
        while(left <= right)
        {
            mid=left+(right-left)/2;
            
            //mid=(int)(left+right)/2;
            //cout<<mid<<" ";
            if(isBadVersion(mid) == false)
                left=mid+1;
            else
            {
                if(mid==0 || isBadVersion(mid) != isBadVersion(mid-1)){
                    res=mid;
                    break;
                }
                else
                    right=mid-1;
               //   res=mid;
            }
        }
        return res;
    
    }
};
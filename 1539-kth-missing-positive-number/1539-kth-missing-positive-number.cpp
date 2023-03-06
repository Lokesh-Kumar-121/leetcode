// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
        
//         int n=arr.size();
//         int i;
//         for(i=0;i<n;i++)
//         {
//             int miss = arr[i]-1 - i;
//             if(miss >= k)
//                 break;
            
//         }
        
        
//         if(i>0 && arr[--i]-1 - i < k)
//         {
//             int miss = arr[i]-1 - i;
//             return arr[i]+k-miss;
//         }
        
//         i--;
//         int miss = arr[i]-1 - i;
//         return arr[i]+k-miss;
        
//     }
// };

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int p=0, i=1, n=arr.size();
        while(k){
            if(p<n && arr[p]==i)    p++;
            else    k--;
            i++;
        }
        return i-1;
    }
};
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        //return haystack.find(needle);
        
//         int n=haystack.length();
//         int m=needle.length();
        
//         int i=0,j=0;
//         //int ind;
//         while(i<n && j<m)
//         {
//             if(haystack[i] == needle[j])
//             {
//                 //ind=i;
//                 //cout<<ind<<endl;
//                 i++;j++;
//             }
//             else
//             {
//                 i++;
//                 j=0;
//             }
//         }
        
        
//         // if(j!=m)
//         //     return -1;
        
//         return i-m;
        
//          int n=haystack.length();
//          int m=needle.length();
        
//         vector<int>arr;
        
//         for(int i=0;i<n;i++)
//         {
//             if(haystack[i] == needle[0])
//                 arr.push_back(i);
//         }
        
//         int ind=-1;
//         for(int i=0;i<arr.size();i++)
//         {
           
//             int x=arr[i],y=0;
            
//             while(x<n && y<m)
//             {
//                 if(haystack[x] == needle[y])
//                 {
//                     x++;y++;
//                 }
//                 else
//                     break;
//                 if(y==m)
//                 {
//                     ind=arr[i];
//                 }
//             }
//             if(ind!=-1)
//                 break;
//         }
        
//         return ind;
        
        return haystack.find(needle);
        
       
        

    }
};
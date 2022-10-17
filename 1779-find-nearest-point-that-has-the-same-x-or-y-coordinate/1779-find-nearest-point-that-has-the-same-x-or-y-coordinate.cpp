class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
       //vector<vector<int>>arr;
        int dist=INT_MAX;
        int ind=-1;
        
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0] == x || points[i][1]==y)
            {
                 int py=abs(points[i][1]-y);
                 int px=abs(points[i][0]-x);
                 if((py+px) < dist)
                 {
                    dist=py+px;
                    ind=i;
                 }
                    
            }
        }
        
        return ind;
        
        // for(auto z:arr)
        // {
        //     for(auto x:z)
        //     {
        //         cout<<x<<" ";
        //     }
        //     cout<<endl;
        // }
        
//         int n=arr.size();
        
//         if(n==0)
//             return -1;
        
        
        
        
//         for(int i=0;i<n;i++)
//         {
//             int py=abs(arr[i][1]-y);
//             int px=abs(arr[i][0]-x);
//             if((py+px) < dist)
//             {
//                 dist=py+px;
//                 small=min(arr[i][0],arr[i][1]);
//             }
            
//         }
        
//         return small;
        
        
        
    }
};
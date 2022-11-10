class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
//         int findrow=-1;
//         for(int i=0;i<matrix.size();i++)
//         {
           
//                if(target >= matrix[i][0] && target <= matrix[i][matrix[i].size()-1])
//                {
//                    findrow=i;
//                    break;
//                }
            
//         }
        
        
       
        
//         //cout<<findrow<<endl;
//         if(findrow==-1)
//             return false;
        
//         int i=0,j=matrix[findrow].size()-1;
//         int mid;
        
//         while(i<=j)
//         {
//             mid=(i+j)/2;
//             if(matrix[findrow][mid] == target)
//                 return true;
//             else if(matrix[findrow][mid] < target)
//                 i=mid+1;
//             else
//                 j=mid-1;
//         }
        
//         return false;
        
        int row=matrix.size();
        int col=matrix[0].size();
        
        int r=0,c=col-1;
        
        while(r < row && c >= 0)
        {
            if(matrix[r][c] == target)  return true;
            
            else if(matrix[r][c] > target)  c--;
            
            else    r++;
        }
        
        return false;
        
       
    }
};
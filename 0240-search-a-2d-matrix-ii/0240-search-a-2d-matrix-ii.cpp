class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        vector<int>index;
        
        for(int i=0;i<matrix.size();i++)
        {
          
            if(target >= matrix[i][0] && target <= matrix[i][matrix[i].size()-1])
                index.push_back(i);
        }
        
        if(index.size() == 0)
            return false;
        
        for(int i=0;i<index.size();i++)
        {
            int start=0,end=matrix[i].size()-1;
            int mid;
            
            while(start <= end)
            {
                mid=(start+end)/2;
                
                if(matrix[index[i]][mid] == target)    return true;
                
                else if(matrix[index[i]][mid] < target)    start=mid+1;
                
                else    end=mid-1;
                    
            }
        }
        
        return false;
    }
};
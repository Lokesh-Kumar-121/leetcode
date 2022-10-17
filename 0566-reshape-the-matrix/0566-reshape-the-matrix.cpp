class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
       // cout<<mat.size();
        
        vector<vector<int>> arr(r,vector<int>(c));
        //int arr[r][c];
        if(mat.size() * mat[0].size() != r*c)
            return mat;
        else
        {
            
            vector<int>nums;
            for(int i=0;i<mat.size();i++)
            {
                for(int j=0;j<mat[i].size();j++)
                {
                    nums.push_back(mat[i][j]);
                }
            }
            
            int k=0;
           
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    arr[i][j]=nums[k++];
                }
            }
        }
        
//          vector<int>nums;
//             for(int i=0;i<mat.size();i++)
//             {
//                 for(int j=0;j<mat[i].size();j++)
//                 {
//                     nums.push_back(mat[i][j]);
//                 }
//             }
        
//         for(auto x:nums)
//             cout<<x<<" ";
        
        
        // for(int i=0;i<r;i++)
        // {
        //     for(int j=0;j<c;j++)
        //     {
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return arr;
        
    }
};
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
//         int res=0;
//         int ind,mn=INT_MAX;
        
//         for(int i=0;i<matrix[0].size();i++)
//         {
//             if(matrix[0][i] < mn)
//             {
//                 ind = i;
//                 mn=matrix[0][i];
//             }
//         }
//         res+=mn;
//         for(int i=1;i<matrix.size();i++)
//         {
//             if(ind==0)
//             {
//                 int mn1=matrix[i][ind];
//                 int mn2=matrix[i][ind+1];
//                 if(mn1 < mn2)
//                 {
//                     res+=mn1;
                    
//                 }
//                 else 
//                 {
//                     res+=mn2;
//                     ind=ind+1;
//                 }
//             }
//             else if(ind==matrix.size()-1)
//             {
//                 int mn1=matrix[i][ind];
//                 int mn2=matrix[i][ind-1];
//                 if(mn1 < mn2)
//                 {
//                     res+=mn1;
                    
//                 }
//                 else 
//                 {
//                     res+=mn2;
//                     ind=ind-1;
//                 }
//             }
//             else
//             {
//                 int mn1=matrix[i][ind];
//                 int mn2=matrix[i][ind+1];
//                 int mn3=matrix[i][ind-1];
//                 if(mn1 < mn2 && mn1 < mn3)
//                 {
//                     res+=mn1;
//                 }
//                 else if(mn2 < mn1 && mn2 < mn3)
//                 {
//                     res+=mn2;
//                     ind=ind+1;
//                 }
//                 else
//                 {
//                     res+=mn2;
//                     ind=ind-1;
//                 }
                
//             }
//         }
        
//         return res;
        
        for(int i = 1; i < matrix.size(); ++i) {
            for(int j = 0; j < matrix[i].size(); ++j) {
                if(j > 0 && j + 1 < matrix[i].size()) {
                    int num1 = matrix[i - 1][j - 1];
                    int num2 = matrix[i - 1][j];
                    int num3 = matrix[i - 1][j + 1];
                    matrix[i][j] += num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
                } else if(j > 0 && j + 1 == matrix[i].size()) {
                    int num1 = matrix[i - 1][j - 1];
                    int num2 = matrix[i - 1][j];
                    matrix[i][j] += num1 < num2 ? num1 : num2;
                } else if(j == 0 && j + 1 < matrix[i].size()) {
                    int num1 = matrix[i - 1][j];
                    int num2 = matrix[i - 1][j + 1];
                    matrix[i][j] += num1 < num2 ? num1 : num2;
                }
            }
        }

        int minSum{10001};
        for(int j = 0; j < matrix.size(); ++j) {
            if(matrix[matrix.size() - 1][j] < minSum) {
                minSum = matrix[matrix.size() - 1][j];
            }
        }

        return minSum;
        
    }
};

// 100 -42 -46 -41
// 31   97  10 -10
// -58 -51  82  89
// 51   81  69 -51

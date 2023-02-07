//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        //code here
        int row=0,col=0;
        int direction = 1;
        int rowans,colans;
        while(row<R && col<C && row>-1 && col>-1)
        {
            rowans=row;
            colans=col;
            
            if(direction == 1)
            {
                if(matrix[row][col] == 0)
                    col+=1;
                
                else
                {
                    matrix[row][col] = 0;
                    direction=2;
                }
            }
            if(direction == 2)
            {
                if(matrix[row][col] == 0)
                    row+=1;
                
                else
                {
                    matrix[row][col] = 0;
                    direction=3;
                }
            }
            if(direction == 3)
            {
                if(matrix[row][col] == 0)
                    col-=1;
                
                else
                {
                    matrix[row][col] = 0;
                    direction=4;
                }
            }
            if(direction == 4)
            {
                if(matrix[row][col] == 0)
                    row-=1;
                
                else
                {
                    matrix[row][col] = 0;
                    direction=1;
                }
            }
        }
        
        return {rowans,colans};
        
    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends
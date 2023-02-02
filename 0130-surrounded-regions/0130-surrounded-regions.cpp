class Solution {
public:
    
    void convert(int row,int col,vector<vector<char>>&board)
    {
        if(row >= board.size() || col >= board[0].size())
            return;
        
        board[row][col] = '#';
        
        if(row < board.size() -1 && board[row+1][col] == 'O')
        {
            convert(row+1,col,board);
        }
        if(col < board[0].size()-1 && board[row][col+1] == 'O')
        {
            convert(row,col+1,board);
        }
        if(row > 0 && board[row-1][col] == 'O')
        {
            convert(row-1,col,board);
        }
        if(col > 0 && board[row][col-1] == 'O')
        {
            convert(row,col-1,board);
        }
        
    }
    
    void solve(vector<vector<char>>& board) {
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(i == 0 || j == 0 || i == board.size()-1 || j == board[0].size()-1)
                {
                    if(board[i][j] == 'O')
                        convert(i,j,board);
                }
            }
        }
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                
                if(board[i][j] == '#')
                    board[i][j] = 'O';
            }
        }
        
        
    }
};


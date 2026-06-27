class Solution {
public:
    void solve(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(i==0 || i==board.size()-1 || j==0 || j==board[0].size()-1){
                    if(board[i][j]=='O') dfs(i,j,board); 
                }
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='#'){
                    board[i][j]='O';
                }
            }
        }
    }
    void dfs(int r,int c,vector<vector<char>>& board){
        if(r<0 || c<0 || r>=board.size() || c>=board[0].size()) return;
        if(board[r][c]!='O') return;
        board[r][c]='#';
        dfs(r,c+1,board);
        dfs(r+1,c,board);
        dfs(r-1,c,board);
        dfs(r,c-1,board);
        return;
    }
};

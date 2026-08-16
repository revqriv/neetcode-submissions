class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.'){
                    for(int r=i+1;r<board.size();r++){
                        if(board[i][j]==board[r][j]){
                            return false;
                        }
                    }
                    for(int c=j+1;c<board[0].size();c++){
                        if(board[i][j]==board[i][c]){
                            return false;
                        }
                    }
                }
                unordered_map<int,int> count;
                if(i%3==0 && j%3==0){
                    for(int row=i;row<i+3;row++){
                        for(int col=j;col<j+3;col++){
                            if(board[row][col]!='.'){
                                count[board[row][col]]++;
                                if(count[board[row][col]]>1){
                                    return false;
                                }
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};

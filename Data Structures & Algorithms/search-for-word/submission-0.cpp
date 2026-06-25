class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(btk(board, i, j, word, 0)) return true;
            }
        }
        return false;
    }
    bool btk(vector<vector<char>>& board,int r,int c,string& word,int i){
        if(i==word.size()) return true;
        if(r<0 || c<0 || r>=board.size() || c>=board[0].size()) return false;
        if(board[r][c]!=word[i]) return false;

        char temp=board[r][c];
        board[r][c]='#';

        bool ans=btk(board,r,c+1,word,i+1) || btk(board,r,c-1,word,i+1) || btk(board,r+1,c,word,i+1) || btk(board,r-1,c,word,i+1);

        board[r][c]=temp;
        return ans;
    }
};

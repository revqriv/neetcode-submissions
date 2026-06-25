class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    count++;
                    btk(grid,i,j);
                }
            }
        }
        return count;
    }
    void btk(vector<vector<char>>& grid,int r,int c){
        if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size()) return;
        if(grid[r][c]=='0') return;

        grid[r][c]='0';
        btk(grid,r+1,c);
        btk(grid,r-1,c);
        btk(grid,r,c+1);
        btk(grid,r,c-1);
    }
};

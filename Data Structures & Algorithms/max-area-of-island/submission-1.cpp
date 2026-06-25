class Solution {
public:
    int mx=0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                    mx=max(mx,btk(grid,i,j));
                }
            }
        }
        return mx;    
    }
    int btk(vector<vector<int>>& grid,int r,int c){
        if(r<0||c<0||r>=grid.size()||c>=grid[0].size()) {
            return 0;
        }
        if(grid[r][c]==0){
            return 0;
        }
        grid[r][c]=0;

        return 1 + btk(grid,r+1,c) + btk(grid,r,c+1) +
        btk(grid,r,c-1) + btk(grid,r-1,c);
    }
};

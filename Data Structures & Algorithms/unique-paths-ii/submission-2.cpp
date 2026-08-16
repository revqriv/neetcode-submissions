class Solution {
public:
    vector<vector<int>> memo;
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1) return 0;
        memo=vector<vector<int>>(m,vector<int>(n,-1));
        return dfs(0,0,obstacleGrid);
    }
    int dfs(int r,int c,vector<vector<int>>& obstacleGrid){
        if(r==obstacleGrid.size()-1 && c==obstacleGrid[0].size()-1) return 1;
        if(r==obstacleGrid.size() || c==obstacleGrid[0].size()) return 0;
        if(obstacleGrid[r][c]==1) return 0;
        if(memo[r][c]!=-1){
            return memo[r][c];
        }
        memo[r][c]=dfs(r+1,c,obstacleGrid) + dfs(r,c+1,obstacleGrid); 
        return memo[r][c]; 
    }
};
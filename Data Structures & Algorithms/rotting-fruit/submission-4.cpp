class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int min=0;
        while(!q.empty()){
            int level=q.size();
            while(level){
                pair<int,int> t=q.front();
                q.pop();
                int r=t.first;
                int c=t.second;
                if(r+1<grid.size() && grid[r+1][c]==1){
                    grid[r+1][c]=2;
                    q.push({r+1,c});
                }
                if(c+1<grid[0].size() && grid[r][c+1]==1){
                    grid[r][c+1]=2;
                    q.push({r,c+1});
                }
                if(r-1>=0 && grid[r-1][c]==1){
                    grid[r-1][c]=2; 
                    q.push({r-1,c});
                }
                if(c-1>=0 && grid[r][c-1]==1){
                    grid[r][c-1]=2;
                    q.push({r,c-1});
                }
                level--;
            }
            if(!q.empty()){
                min++;
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return min;
    }
};

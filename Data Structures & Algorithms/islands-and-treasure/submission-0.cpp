class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        int val=1;
        while(!q.empty()){
            int level=q.size();
            while(level){
                pair<int,int> t=q.front();
                q.pop();
                int r=t.first;
                int c=t.second;
                if(r+1<grid.size() && grid[r+1][c]==2147483647){
                    grid[r+1][c]=val;
                    q.push({r+1,c});
                }
                if(c+1<grid[0].size() && grid[r][c+1]==2147483647){
                    grid[r][c+1]=val;
                    q.push({r,c+1});
                }
                if(r-1>=0 && grid[r-1][c]==2147483647){
                    grid[r-1][c]=val; 
                    q.push({r-1,c});
                }
                if(c-1>=0 && grid[r][c-1]==2147483647){
                    grid[r][c-1]=val;
                    q.push({r,c-1});
                }
                level--;
            }
            val++;
        }
    }
};

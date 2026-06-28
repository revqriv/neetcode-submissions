class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<bool>> pac(m, vector<bool>(n, false));
        vector<vector<bool>> atl(m, vector<bool>(n, false));
        vector<vector<int>> ans;
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[0].size();j++){
                if(i==0 || j==0){
                    pc(heights,i,j,pac);
                }
                if(i==heights.size()-1 || j==heights[0].size()-1){
                    al(heights,i,j,atl);
                }
            }
        }
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[0].size();j++){
                if(pac[i][j] && atl[i][j]){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
    void pc(vector<vector<int>>& heights,int r,int c,vector<vector<bool>>& pac){
        if(r<0 || c<0 || r>=heights.size() || c>=heights[0].size()) return;
        if(pac[r][c]) return;
        pac[r][c]=true;
        if(r+1<heights.size() && heights[r][c]<=heights[r+1][c]) pc(heights,r+1,c,pac);
        if(r-1>=0 && heights[r][c]<=heights[r-1][c]) pc(heights,r-1,c,pac);
        if(c+1<heights[0].size() && heights[r][c]<=heights[r][c+1]) pc(heights,r,c+1,pac);
        if(c-1>=0 && heights[r][c]<=heights[r][c-1]) pc(heights,r,c-1,pac);
    }
    void al(vector<vector<int>>& heights,int r,int c,vector<vector<bool>>& atl){
        if(r<0 || c<0 || r>=heights.size() || c>=heights[0].size()) return;
        if(atl[r][c]) return;
        atl[r][c]=true;
        if(r+1<heights.size() && heights[r][c]<=heights[r+1][c]) al(heights,r+1,c,atl);
        if(r-1>=0 && heights[r][c]<=heights[r-1][c]) al(heights,r-1,c,atl);
        if(c+1<heights[0].size() && heights[r][c]<=heights[r][c+1]) al(heights,r,c+1,atl);
        if(c-1>=0 && heights[r][c]<=heights[r][c-1]) al(heights,r,c-1,atl);
    }
};

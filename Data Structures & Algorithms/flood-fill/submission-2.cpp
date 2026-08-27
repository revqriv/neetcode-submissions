class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int temp=image[sr][sc];
        if(temp==color) return image;
        dfs(image,sr,sc,temp,color);
        return image;
    }
    void dfs(vector<vector<int>>& image, int sr, int sc, int temp,int color){
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size()) return;
        if(image[sr][sc]!=temp) return;
        //if(image[sr][sc]==color) return;

        image[sr][sc]=color;
        dfs(image,sr+1,sc,temp,color);
        dfs(image,sr,sc+1,temp,color);
        dfs(image,sr-1,sc,temp,color);
        dfs(image,sr,sc-1,temp,color);
    }
};
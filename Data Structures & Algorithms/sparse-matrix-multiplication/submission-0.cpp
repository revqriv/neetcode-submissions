class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        int mat1_row=mat1.size();
        int mat1_col=mat1[0].size();
        int mat2_col=mat2[0].size();
        vector<vector<int>> ans(mat1_row, vector<int>(mat2_col, 0));
        for(int i=0;i<mat1_row;i++){
            for(int j=0;j<mat2_col;j++){
                for(int k=0;k<mat1_col;k++){
                    ans[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }
        return ans;
    }
};

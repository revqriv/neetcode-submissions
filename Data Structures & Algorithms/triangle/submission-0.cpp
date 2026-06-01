class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int> bac(triangle.back());
        for(int row=n-2;row>=0;row--){
            for(int col=0;col<triangle[row].size();col++){
                bac[col] = triangle[row][col] + min(bac[col],bac[col+1]);
            }
        }
        return bac[0];
    }
};
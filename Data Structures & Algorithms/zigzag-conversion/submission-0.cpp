class Solution {
public:
    string convert(string s, int numRows) {
        int i=0;
        int j=0;
        int flag=0;
        int n=s.size();
        vector<vector<char>> vals(numRows, vector<char>(n, '\0'));
        for(char c : s){
            vals[i][j]=c;
            if(flag==0){
                if(i==numRows-1){
                    flag=1;
                    i--;
                    j++;
                }
                else{
                    i++;
                }
            }
            else{
                if(i!=0){
                    j++;
                    i--;
                }
                else if(i==0){
                    flag=0;
                    i++;
                }
            }
        }
        string ans="";
        for (int r = 0; r < numRows; r++) {
            for (int c_idx = 0; c_idx < n; c_idx++) {
                if (vals[r][c_idx] != '\0') {
                    ans += vals[r][c_idx];
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        int sum=accumulate(matchsticks.begin(),matchsticks.end(),0);
        sort(matchsticks.rbegin(), matchsticks.rend());
        if(sum%4!=0) return false;

        vector<int> sides(4,0);
        return dfs(matchsticks,sides,0);
    }
    bool dfs(vector<int>& matchsticks,vector<int>& sides,int i){
        if(i==matchsticks.size()){
            return sides[0]==sides[1] && sides[1]==sides[2] && sides[2]==sides[3];
        }
        for(int j=0;j<4;j++){
            if(j>0 && sides[j]==sides[j-1]) continue;
            sides[j]+=matchsticks[i];
            if(dfs(matchsticks,sides,i+1)) return true;
            sides[j]-=matchsticks[i];
        }
        return false;
    }
};
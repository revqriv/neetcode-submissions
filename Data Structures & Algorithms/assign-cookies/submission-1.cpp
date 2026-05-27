class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        std::sort(s.begin(),s.end());
        std::sort(g.begin(),g.end());
        int count=0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<s.size();j++){
                if(s[j]>=g[i]){
                    count++;
                    s.erase(s.begin()+j);
                    break;
                }
            }
        }
        return count;
    }
};
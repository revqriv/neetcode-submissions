class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        for(int i=0;i<temperatures.size();i++){
            int flag=0;
            for(int j=i+1;j<temperatures.size();j++){
                if(temperatures[j]>temperatures[i]){
                    ans.push_back(j-i);
                    flag=1;
                    break;
                }
            }
            if(!flag){
                ans.push_back(0);
            }
        }
        return ans;
    }
};

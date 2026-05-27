class Solution {
public:
    int findLucky(vector<int>& arr) {
        std::unordered_map<int,int> count={};
        for(int i=0;i<arr.size();i++){
            count[arr[i]]++;
        }
        int max=-1;
        for(const auto& [key, val] : count){
            if(key==val){
                if(key>max){
                    max=key;
                }
            }
        }
        return max;
    }
};
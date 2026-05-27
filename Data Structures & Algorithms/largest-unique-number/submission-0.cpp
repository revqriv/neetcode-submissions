class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        int maxVal=-1;
        std::unordered_map<int,int> count={};
        for(int x : nums){
            count[x]++;
        }
        for(const auto& [key,val]: count){
            if(val==1){
                if(key>maxVal){
                    maxVal=key;
                }
            }
        }
        return maxVal;
    }
};

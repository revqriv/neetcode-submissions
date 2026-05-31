class Solution {
public:
    int minOperations(vector<int>& nums) {
        int min=0;
        unordered_map<int, int> hash;
        for(int i:nums){
            hash[i]++;
        }
        for(const auto& [key,value]:hash){
            if(value%3==0){
                min+=(value/3);
            }
            else if(value==1){
                return -1;
            }
            else{
                min+=(value/3);
                min++;
            }
        }
        return min;
    }
};
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing={};
        for(int i=0;i<nums.size();i++){
            if(std::count(nums.begin(), nums.end(), i+1) == 0){
                missing.push_back(i+1);
            }
        }
        return missing;
    }
};
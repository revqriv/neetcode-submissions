class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_map<int, int> c1 ={};
        for(int i : nums1){
            c1[i]++;
        }
        std::vector<int> ans={};
        for(const auto& [key,val] : c1){
            for(int i=0;i<nums2.size();i++){
                if(key==nums2[i]){
                    ans.push_back(key);
                    break;
                }
            }
        }
        return ans;           
    }
};
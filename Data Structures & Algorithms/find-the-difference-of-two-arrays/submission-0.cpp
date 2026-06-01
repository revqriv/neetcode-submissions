class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> num1(nums1.begin(),nums1.end());
        unordered_set<int> num2(nums2.begin(),nums2.end());
        vector<int> ans1, ans2;
        for(int i: num1){
            if(num2.find(i)==num2.end()){
                ans1.push_back(i);
            }
        }
        for(int i: num2){
            if(num1.find(i)==num1.end()){
                ans2.push_back(i);
            }
        }
        vector<vector<int>> ans= {ans1,ans2};
        return ans;
    }
};
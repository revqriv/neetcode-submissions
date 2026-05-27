class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans={};
        for(int i=0;i<nums1.size();i++){
            int found=-1;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    found=j;
                }
            }    
            int push=-1;
            for(int k=found+1;k<nums2.size();k++){
                if(nums2[k]>nums1[i]){
                    push=nums2[k];
                    break;
                }
            }
            ans.push_back(push);
        }
        return ans;
    }
};
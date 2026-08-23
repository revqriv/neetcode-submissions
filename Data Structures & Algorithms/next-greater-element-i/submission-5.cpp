class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> idx;
        for(int i=0;i<nums1.size();i++){
            idx[nums1[i]]=i;
        }
        stack<int> stk;
        vector<int> res(nums1.size(),-1);
        for(int n:nums2){
            while(!stk.empty() && n>stk.top()){
                int val=stk.top();
                stk.pop();
                int temp=idx[val];
                res[temp]=n;
            }
            if(idx.find(n)!=idx.end()){
                stk.push(n);
            }
        }
        return res;
    }
};
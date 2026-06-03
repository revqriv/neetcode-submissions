class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r=numbers.size()-1;
        int sum=numbers[l]+numbers[r];
        while(true){
            if(sum<target){
                sum-=numbers[l];
                l++;
                sum+=numbers[l];
            }
            else if(sum==target){
                vector<int> arr={l+1,r+1};
                return arr;
            }
            else if(sum>target){
                sum-=numbers[r];
                r--;
                sum+=numbers[r];
            }
        }
    }
};

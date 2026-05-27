class Solution {
public:
    int countElements(vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(std::find(arr.begin(),arr.end(),arr[i]+1)!=arr.end()){
                count++;
            }
        }
        return count;
    }
};

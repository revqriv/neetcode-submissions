class Solution {
public:
    bool isUgly(int n) {
        if(n<0){
            return false;
        }
        vector<int> facts={2,3,5};
        for(int i: facts){
            while(n%i==0){
                n=n/i;
            }
        }
        if(n>1){
            return false;
        }
        return true;
    }
};
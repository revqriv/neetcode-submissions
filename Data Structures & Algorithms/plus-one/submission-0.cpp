class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int p=digits.size()-1;
        while(p>=0){
            if(digits[p]==9){
                digits[p]=0;
                p--;
                
            }
            else{
                digits[p]++;
                return digits;
            }
        }
        digits[0]=1;
        digits.push_back(0);
        return digits;

    }
};

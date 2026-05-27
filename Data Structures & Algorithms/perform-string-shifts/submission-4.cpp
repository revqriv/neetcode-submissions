class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int right=0;
        int n=s.size();
        std::string st="";
        for(int i=0;i<shift.size();i++){
            if(shift[i][0]==0){
                for(int j=0;j<shift[i][1];j++)
                    right--;
            }
            else{
                for(int j=0;j<shift[i][1];j++)
                    right++;
            }
        }
        right=right%n;
        if(right<0){
            right+=n;
        }
        if(right>0){
            for(int i=0;i<right;i++){
                st+=s[n-right+i];
            }
            for(int i=0;i<n-right;i++){
                st+=s[i];
            }
        }
        if(right==0){
            return s;
        }
        /*if(right<0){
            for(int i=std::abs(right);i<s.size();i++){
                st+=s[i];
            }
            for(int i=0;i<std::abs(right);i++){
                st+=s[i];
            }
        }*/
        return st;
    }
};

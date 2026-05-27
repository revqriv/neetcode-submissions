class Solution {
public:
    bool isPalindrome(string s) {
        bool ans=true;
        int start=0;
        int end=s.size()-1;
        while(start<end){
            while(start<end){
                if(std::isalnum(static_cast<unsigned char>(s[start]))){
                    break;
                }
                else{
                    start++;
                }
            }
            while(start<end){
                if(std::isalnum(static_cast<unsigned char>(s[end]))){
                    break;
                }
                else{
                    end--;
                }
            }
            if(std::tolower(static_cast<unsigned char>(s[start]))!=std::tolower(static_cast<unsigned char>(s[end]))){
                return false;
            }
            else{
                end--;
                start++;
            }
        }
        return ans;
    }
};

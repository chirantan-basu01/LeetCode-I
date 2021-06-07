class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        
        while(left<right){
            while(left<right and !isalnum(s[left]))
                left++;
            while(right>left and !isalnum(s[right]))
                right--;
            if(tolower(s[left])!=tolower(s[right]))
                return false;
            left++;
            right--;
        }
        return true;
    }
};
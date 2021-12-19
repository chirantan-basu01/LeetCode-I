class Solution {
public:
    bool isPalindrome(string str){
    int len = str.length();
    for (int i = 0; i < len/2; i++ )
        if (str[i] != str[len-i-1])
            return false;
 
    return true;
}
    
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for (int i = 0; i< words.size(); i++){
            string check_str;
            check_str = words[i];
            if (isPalindrome(check_str)){
                ans= check_str;
                break;
            }
        }
        return ans;
    }
};
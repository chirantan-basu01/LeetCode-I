class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
       string ans="";
        for(int i=0; i<nums.size(); i++) {
            ans+=to_string(1-(nums[i][i]-'0'));
		}
        return ans; 
    }
};
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        priority_queue<int> pqmax(nums.begin(),nums.end());
        priority_queue<int,vector<int>,greater<int>> pqmin(nums.begin(),nums.end());
        vector<int> ans;
        while(true)
        {
            if(ans.size()%2==1){
                ans.push_back(pqmax.top());
                pqmax.pop();
            }
            else if(ans.size()%2==0){
                  ans.push_back(pqmin.top());
                pqmin.pop();
            }
            if(ans.size()==nums.size())
                break;
        }
        return ans;
    }
};
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=2;i<nums.size();i++){                   //start from 2 coz each triangle must have 3 sides
            int val = nums[i];                                   //longest side till now
            int start=0, end = i-1;
            while(start < end){                                //check for pair of sides with sum more than val
                if(nums[start]+nums[end]>val){       
                    ans+= (end-start);                        //add all the sides between end and start(explained above)
                    end--;
                }
                else{
                    start++;                                  //  increment start to increase the sum
                }
            }
        }
        return ans;
    }
};
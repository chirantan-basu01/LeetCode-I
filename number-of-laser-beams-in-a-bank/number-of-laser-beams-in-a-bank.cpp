class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>nums;
        int count=0;
        
        for(int i=0;i<bank.size();i++){
            count=0;
            for(int j=0;j<bank[0].size();j++){
                if(bank[i][j]=='1'){
                    count++;
                }                
            }
            if(count>0)
                nums.push_back(count);
        }
        if(nums.size()<=1)
            return 0;
            
        long long sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=(nums[i]*nums[i+1]);
        }
        return sum;
    }
};
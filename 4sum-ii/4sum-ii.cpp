class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int,int>ump;
        for(auto it1:nums1){
            for(auto it2:nums2){
                ump[it1+it2]++;
            }
        }
        int count=0;
        for(auto it3:nums3){
            for(auto it4:nums4){
                auto it=ump.find(-it3-it4);
                if(it!=ump.end()){
                    count+=it->second;
                }
            }
        }
        return count;
    }
};
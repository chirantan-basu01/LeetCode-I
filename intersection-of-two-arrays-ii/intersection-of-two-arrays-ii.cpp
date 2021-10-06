class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>ump;
        vector<int>ans;
        for(int it=0;it<nums1.size();it++){
            ump[nums1[it]]++;
        }
        for(int it=0;it<nums2.size();it++){
            if(ump[nums2[it]]>0){
                ump[nums2[it]]--;
                ans.push_back(nums2[it]);
            }
        }
        return ans;
    }
};
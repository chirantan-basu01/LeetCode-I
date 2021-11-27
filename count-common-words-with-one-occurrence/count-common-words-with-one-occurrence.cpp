class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count=0;
        unordered_map<string,int>mp1,mp2;
        
        for(auto it:words1){
            mp1[it]++;
        }
        
        for(auto it:words2){
            mp2[it]++;
        }
        
        for(auto it:words1){
            if(mp1[it]==1 and mp2[it]==1){
              count++;
            }
        }
        return count;
    }
};
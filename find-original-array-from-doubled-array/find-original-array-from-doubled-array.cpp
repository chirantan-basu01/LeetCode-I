class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int,int>freq;
        vector<int>res;
        sort(changed.begin(),changed.end());
        
        for(auto num:changed){
            freq[num]++;    
        }
        
        for(auto num: changed){
            if(freq[num] and freq[num*2]){
                freq[num]--;
                freq[num*2]--;
                res.push_back(num);
            }
        }
        for(auto [a,b]:freq){
            if(b)
                return {};
        }
        return res;
    }
};
class RangeFreqQuery {
public:
    unordered_map<int,vector<int>>mp;
    RangeFreqQuery(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            mp[arr[i]].push_back(i);
        }
    }
    
    int query(int L, int R, int value) {
        return upper_bound(begin(mp[value]),end(mp[value]),R)-lower_bound(begin(mp[value]),end(mp[value]),L);
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */
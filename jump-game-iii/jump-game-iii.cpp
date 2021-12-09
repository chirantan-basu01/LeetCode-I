class Solution {
public:
    bool rec(vector<int>& arr, int curr, vector<bool>& v) {
        if ((curr < 0) || (curr >= arr.size()) || v[curr]) return false;
        if (arr[curr] == 0) return true;
        v[curr] = true;
        return rec(arr, curr + arr[curr], v) || rec(arr, curr - arr[curr], v);
    }
    
    bool canReach(vector<int>& arr, int start) {
        vector<bool> visited(arr.size(), false);
        return rec(arr, start, visited);
    }
};
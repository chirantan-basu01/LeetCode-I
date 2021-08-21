class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>maxHeap;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            maxHeap.push({abs(arr[i]-x),arr[i]});
         
            if(maxHeap.size()>k)
                maxHeap.pop();
        }
        while(maxHeap.size()>0){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        sort(begin(ans),end(ans));
        return ans;
    }
};
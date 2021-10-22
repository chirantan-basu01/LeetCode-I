class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>ump;
        string ans;
        for(int i=0;i<s.size();i++){
            ump[s[i]]++;
        } 
        
        priority_queue<pair<int,char>>pq;
        for(auto it:ump){
            pq.push({it.second,it.first});
        }
        while(!pq.empty()){
            pair<int,char>curr=pq.top();
            pq.pop();
            // cout<<curr.first<<" "<<curr.second;
            int freq=curr.first;
            while(freq>0){
                ans.push_back(curr.second);
                freq--;
            }
        }
        return ans;
    }
};
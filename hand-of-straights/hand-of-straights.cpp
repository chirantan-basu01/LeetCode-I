class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize)
            return 0;
        
        map<int,int>mp;
        for(auto it:hand){
            mp[it]++;
        }
        
        while(!mp.empty()){
            int first_value=mp.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(mp.find(first_value)==mp.end())
                    return 0;
                mp[first_value]--;
                if(mp[first_value]==0)
                    mp.erase(first_value);
                first_value++;
                cout<<first_value<<" ";
            }
        }
        return true;
    }
};
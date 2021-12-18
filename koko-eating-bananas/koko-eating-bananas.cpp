class Solution {
public:
    bool canEat(vector<int>& piles,int k,int h){
        for(auto &it:piles){
            h=h-(1+(it-1)/k);
        }
        return (h>=0);
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int right=1,left=1;
        for(auto &it:piles){
            right=max(right,it);
        }
        while(left<right){
            int mid=(left+right)/2;
            if(canEat(piles,mid,h)){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return right;
    }
};
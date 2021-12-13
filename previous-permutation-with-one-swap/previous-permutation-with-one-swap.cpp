class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int len=arr.size();
        
        if(len<2)
            return arr;
        
        int left=len-2;
        while(left>=0 and arr[left+1]>=arr[left]){
            left--;
        }
        if(left<0)
            return arr;
        
        int right=arr.size()-1;
        while(arr[right]>=arr[left]){
            right--;
        }
        while(arr[right]==arr[right-1]){
            right--;
        }
        swap(arr[right],arr[left]);
        return arr;
    }
};
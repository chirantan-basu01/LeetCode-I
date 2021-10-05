class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int res=0,sum=0;
        int i=0,j=0;
        int count=0;
        
        while(i<arr.size()){
            if(count<k){
                count++;
                sum+=arr[i];
                i++;
            }
            else{
                sum-=arr[j];
                count--;
                j++;
            }
            if(count==k and sum/k>=threshold){
                res++;
            }
        }
        return res;
    }
};
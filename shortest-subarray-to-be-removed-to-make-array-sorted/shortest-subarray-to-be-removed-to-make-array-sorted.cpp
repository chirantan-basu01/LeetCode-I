class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size();
        int low=0,high=n-1;
        
        while(low+1<n and arr[low]<=arr[low+1])
            low++;
        
        if(low==n-1)
            return 0;
        
        while(low<high and arr[high]>=arr[high-1])
            high--;
        
        int ans=min(n-low-1,high);
        int i=0,j=high;
        
        while(i<=low and j<n){
            if(arr[i]<=arr[j]){
                ans=min(ans,j-i-1);
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};
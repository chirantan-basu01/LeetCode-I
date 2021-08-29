   struct comparator{
    bool operator()(string a,string b){
        int n=a.size();
        int m=b.size();
		// check if a is greater than b
        if(n>m){
            return true;
        }
        if(m>n){
            return false;
        }
		// if length of both string equal
        int index = 0;
        while(index < n){
		    // if index of b is greater return false otherwise return true
            if(a[index] < b[index])return false;
            else if(a[index] > b[index])return true;
            index++;
        }
        return false;
    }
};

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
	    // min-heap with custom comparator
        priority_queue<string,vector<string>,comparator>pq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
			//pop the top element if size of pq becomes greater
            if(pq.size()>k){
                pq.pop();
            }
        }
        
        return pq.top();
    }
};
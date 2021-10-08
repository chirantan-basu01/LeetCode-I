class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int total_customer=0,satisfied=0,unsatisfied=0,start=0,end=0;
        
        for(int i=0;i<customers.size();i++){
            total_customer+=customers[i];
            if(grumpy[i]==0){
                satisfied+=customers[i];
            }
        }
        
        if(minutes==customers.size())
            return total_customer;
        
        int max_unsatisfied=INT_MIN;
        
        while(end<minutes){
            if(grumpy[end]==1){
                unsatisfied+=customers[end];
            }
            end++;
        }
        max_unsatisfied=max(max_unsatisfied,unsatisfied);
        
        while(end<customers.size()){
            if(grumpy[start]==1)
                unsatisfied-=customers[start];
            start++;
            
            if(grumpy[end]==1)
                unsatisfied+=customers[end];
            
            max_unsatisfied=max(max_unsatisfied,unsatisfied);
            end++;  
        }
        return max_unsatisfied+satisfied;
    }
};
class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        int maxi=*max_element(milestones.begin(),milestones.end());
        long long int sum=0;
        for(int i=0;i<milestones.size();i++){
            sum+=milestones[i];
        }
        long long int rest=sum-maxi;
        return min({rest*2+1,sum});
    }
};
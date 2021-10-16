class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        vector<int>ans;
         int res=0;
        int n=seats.size();
        for(int i=0;i<n;i++){
                int temp=abs(students[i]-seats[i]);
                ans.push_back(temp);
        }
        for(auto it :ans){
            res+=it;
        }
        return res;
    }
};
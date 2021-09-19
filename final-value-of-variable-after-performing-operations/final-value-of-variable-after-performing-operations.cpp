class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        int add=0;
        int sub=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="X++" || operations[i]=="++X"){
                add++;
            }
            else if(operations[i]=="X--" || operations[i]=="--X"){
                sub++;
            }
        }
        ans=(add-sub);
        return ans;
    }
};
/*
1. Create an array of Size N + 1 to represent each person.
   arr[i] represents trust score of i th person
   and arr[i] = number of persons trusts him - number of 
   persons he trusts.
2. Now, traverse through given array. 
    a, b = a trusts b.
    if a person trusts others,
	then decrease his score by 1. i.e, arr[a]--
    if a person is trusted by others, 
    then increase his score by 1. i.e, arr[b]++
3. At last traverse through each person,
    if anyone found with N - 1 trusts,
	then return his index.
4. if not found, return -1
*/

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>trusts(n+1,0);
        
        for(auto person:trust){
            trusts[person[0]]--;
            trusts[person[1]]++;
        }
        
        for(int i=1;i<=n;i++){
            if(trusts[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};

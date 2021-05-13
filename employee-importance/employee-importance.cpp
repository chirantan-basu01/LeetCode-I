/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int result=0;
        for(auto &emp:employees){
            if(emp->id==id){
                result=emp->importance;
                if(!emp->subordinates.empty()){
                    for(auto &s:emp->subordinates){
                        result+=getImportance(employees,s);
                    }
                }
                return result;
            }
        }
        return result;
    }
};
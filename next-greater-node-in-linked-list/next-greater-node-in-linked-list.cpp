/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int>hole;
        vector<int>values;
        
        for(auto node=head;node;node=node->next){
            values.push_back(node->val);
        }
        
        vector<int>res(values.size(),0);
        
        for(auto i=0;i<values.size();i++){
           
            while(!hole.empty() and values[i]>values[hole.top()]){
                res[hole.top()]=values[i];
                hole.pop();
            }
             
            hole.push(i);
        }
        return res;
    }
};
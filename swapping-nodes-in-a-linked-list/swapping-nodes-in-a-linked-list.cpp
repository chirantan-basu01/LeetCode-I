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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *runner=head,*prev=NULL,*follower=head;
        
        for(int i=0;i<k;i++){
            prev=runner;
            runner=runner->next;
        }
        while(runner){
            runner=runner->next;
            follower=follower->next;
        }
        swap(prev->val,follower->val);
        return head;
    }
};
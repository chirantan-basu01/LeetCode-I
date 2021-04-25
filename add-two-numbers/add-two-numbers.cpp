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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode*cur=head;
        int plus=0;
        while(l1 || l2){
            int num=(l1?l1->val:0)+(l2?l2->val:0)+plus;
            if(num>=10){
                num-=10;
                plus=1;
            }
            else plus=0;
            cur->next=new ListNode(num);
            cur=cur->next;
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        if(plus)
            cur->next=new ListNode(1);
        return head->next;
    }
};

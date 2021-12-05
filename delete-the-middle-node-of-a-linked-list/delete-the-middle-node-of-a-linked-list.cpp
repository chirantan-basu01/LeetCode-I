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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            delete head;
            return NULL;
        }
        
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=head;
        
        if(slow->next->next==NULL){
            slow->next=NULL;
            return head;
        }
        
        while(fast!=NULL and fast->next!=NULL){
            prev=slow;
            fast=fast->next->next;
            slow=slow->next;
        }
        if(slow->next!=NULL){
            prev->next=prev->next->next;
        }
        return head;
    }
};
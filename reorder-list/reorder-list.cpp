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
    ListNode *reverse(ListNode *head){
        ListNode *prev=NULL,*current=head,*next=NULL;
        while(current){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        return prev;
    }
    
    void merge(ListNode *head1,ListNode *head2){
        while(head2){
            ListNode *next=head1->next;
            head1->next=head2;
            head1=head2;
            head2=next;
        }
    }
    
    void reorderList(ListNode* head) {
        //find mid //reverse //merge
        
        if(!head or !head->next)
            return;
        ListNode *prev=NULL,*fast=head,*slow=head,*l1=head;
        
        while(fast and fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        } 
        prev->next=NULL;
        
        ListNode *l2=reverse(slow);
        
        merge(l1,l2);
    }
};
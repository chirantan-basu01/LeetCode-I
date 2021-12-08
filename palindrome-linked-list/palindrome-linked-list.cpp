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
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL,*curr=head,*temp=NULL;
        while(curr != NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    
    ListNode* findMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast){
                fast=fast->next;
            }
        }
        return slow;
    }
    
    bool compareList(ListNode* head1,ListNode* head2){
        while(head1!=NULL and head2!=NULL){
            if(head1->val!=head2->val)
                return false;
            head1=head1->next;
            head2=head2->next;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL and head->next==NULL)
            return true;
        
        ListNode* h=head;
        ListNode* mid=findMid(h);
        ListNode* head2=reverseList(mid);
        
        return compareList(head,head2);
    }
};
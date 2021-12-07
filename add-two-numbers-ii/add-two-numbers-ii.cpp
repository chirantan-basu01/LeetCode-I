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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* current=head;
        ListNode* nextNode=NULL;
        
        while(current!=NULL){
            nextNode=current->next;
            current->next=prev;
            prev=current;
            current=nextNode;
        }
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverseList(l1);
        l2=reverseList(l2);
        
        bool flag=0;
        ListNode* head=new ListNode(-1);
        ListNode* curr=head;
        while(l1!=nullptr || l2!=nullptr){
            int val1=0;
            int val2=0;
            if(l1!=nullptr && l2!=nullptr){
                val1=l1->val;
                l1=l1->next;
                val2=l2->val;
                l2=l2->next;
            }
            else if(l2!=nullptr){
                val2=l2->val;
                l2=l2->next;
            }else if(l1!=nullptr){
                val1=l1->val;
                l1=l1->next;
            }
            int total=0;
            if(flag){ 
                total=val1+val2+1;
                flag=0;
            } 
            else 
                total=val1+val2;
            if(total>9) {
                total=total%10;
                flag=1;
            }
            ListNode* node=new ListNode(total);
            curr->next=node;
            curr=node;
        }
        if(flag) {
            ListNode* node=new ListNode(1);
            curr->next=node;
        }
        return reverseList(head->next);
    }
};
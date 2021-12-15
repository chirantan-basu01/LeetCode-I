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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *p=head->next;
        head->next=NULL;
        
        while(p!=NULL){
            ListNode *pNext=p->next;
            ListNode *q=head;
            if(p->val<q->val){
                p->next=q;
                head=p;
            }
            else{
                while(q!=NULL and q->next!=NULL and q->next->val<=p->val)
                    q=q->next;
                p->next=q->next;
                q->next=p;
            }
            p=pNext;
        }
        return head;
    }
};
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode=new ListNode(-1);
        ListNode* head=dummyNode;
        while(l1!=NULL and l2!=NULL){
            if(l1->val<l2->val){
                head->next=new ListNode(l1->val);
                l1=l1->next;
            }
            else{
                head->next=new ListNode(l2->val);
                l2=l2->next;
            }
            head=head->next;
        }
        if(l1!=NULL)
             head->next=l1;
        if(l2!=NULL)
            head->next=l2;
        return dummyNode->next;
    }
    
    ListNode* doSort(ListNode* head){
        if(head==NULL or head->next==NULL)
            return head;
        ListNode *fastptr=head,*slowptr=head;
        while(fastptr and fastptr->next and fastptr->next->next){
            fastptr=fastptr->next->next;
            slowptr=slowptr->next;
        }
        ListNode *l2=slowptr->next;
        slowptr->next=NULL;
        ListNode *l1=head;
        
        ListNode *leftLL=doSort(l1);
        ListNode *rightLL=doSort(l2);
        
        return mergeTwoLists(leftLL,rightLL);
    }
    
    ListNode* sortList(ListNode* head) {
        return doSort(head);
    }
};
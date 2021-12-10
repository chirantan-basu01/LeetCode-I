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
    ListNode* mergeInBetween(ListNode* l1, int a, int b, ListNode* l2) {
        ListNode *f=l1,*s=l1;
        
        for(int i=0;i<a-1;i++){
            f=f->next;
        }
        for(int i=0;i<b;i++){
            s=s->next;
        }
        f->next=l2;
        while(l2->next){
            l2=l2->next;
        }
        l2->next=s->next;
        return l1;
    }
};
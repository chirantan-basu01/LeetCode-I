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
    ListNode* middleNode(ListNode* head) {
        ListNode* slowptr=head;
        ListNode* fastptr=head;
        
        while(fastptr->next and fastptr->next->next){
            fastptr=fastptr->next->next;
            slowptr=slowptr->next;
        }
        
        if(fastptr->next)
            return slowptr->next;
        return slowptr;
    }
};
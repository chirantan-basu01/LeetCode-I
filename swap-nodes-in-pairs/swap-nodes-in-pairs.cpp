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
    ListNode* pairSwap(ListNode* head) {
        if(head==NULL or head->next==NULL){
            return head;
        }
        ListNode *firstNode=head;
        ListNode *secondNode=head->next;
        
        ListNode* temp=pairSwap(head->next->next);
        firstNode->next=temp;
        secondNode->next=firstNode;
        
        return secondNode;
    }
    
    ListNode* swapPairs(ListNode* head) {
        return pairSwap(head);
    }
};